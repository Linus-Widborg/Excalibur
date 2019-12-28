#include <QMouseEvent>
#include <QtCore/QMimeData>
#include <QtGui/QDrag>
#include <QtGui/QPainter>
#include <QtWidgets/QLabel>

#include "GameBoard.h"

GameBoard::GameBoard(QWidget* parent) : QFrame(parent)
{
    resize(648, 900);
    setStyleSheet("background-image: url(:/images/Camelot.png); background-repeat: no-repeat");
    setAcceptDrops(true);
    createTokens();
}

void GameBoard::mousePressEvent(QMouseEvent* event) {
    QLabel* child = static_cast<QLabel*>(childAt(event->pos()));
    if (!child)
        return;

    QPixmap pixmap = *child->pixmap();

    QByteArray itemData;
    QDataStream dataStream(&itemData, QIODevice::WriteOnly);
    dataStream << pixmap << QPoint(event->pos() - child->pos()) << qint32(1);

    QMimeData* mimeData = new QMimeData();
    mimeData->setData("application/x-token", itemData);

    QDrag *drag = new QDrag(this);
    drag->setMimeData(mimeData);
    drag->setPixmap(pixmap);
    drag->setHotSpot(event->pos() - child->pos());

    QPixmap tempPixmap = pixmap;
    QPainter painter;
    painter.begin(&tempPixmap);
    painter.fillRect(pixmap.rect(), QColor(127, 127, 127, 127));
    painter.end();

    child->setPixmap(tempPixmap);

    if (drag->exec(Qt::CopyAction | Qt::MoveAction, Qt::CopyAction) == Qt::MoveAction) {
        child->close();
    } else {
        child->show();
        child->setPixmap(pixmap);
    }
}

void GameBoard::dragEnterEvent(QDragEnterEvent* event)
{
    if (event->mimeData()->hasFormat("application/x-token")) {
        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}

void GameBoard::dragMoveEvent(QDragMoveEvent* event)
{
    if (event->mimeData()->hasFormat("application/x-token")) {
        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}

void GameBoard::dropEvent(QDropEvent* event)
{
    if (event->mimeData()->hasFormat("application/x-token")) {
        QByteArray itemData = event->mimeData()->data("application/x-token");
        QDataStream dataStream(&itemData, QIODevice::ReadOnly);

        QPixmap pixmap;
        QPoint offset;
        qint32 index;
        dataStream >> pixmap >> offset >> index;
        QPoint newPosition = event->pos() - offset;

        QLabel* newIcon = new QLabel(this);
        newIcon->setPixmap(pixmap);
        newIcon->move(newPosition);
        newIcon->show();
        newIcon->setAttribute(Qt::WA_DeleteOnClose);

        knight.move(toPosition(newPosition));

        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}

void GameBoard::createTokens() {
    Position position(100, 100);
    knight = Knight(position);
    QLabel* token = new QLabel(this);
    QPixmap pixmap(":/images/Knight.png");
    token->setPixmap(pixmap);
    token->move(position);
    token->show();
    token->setAttribute(Qt::WA_DeleteOnClose);
}
