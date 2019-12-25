#ifndef EXCALIBUR_KNIGHT_H
#define EXCALIBUR_KNIGHT_H

#include <QtWidgets/QFrame>

class QLabel;

class Knight : public QFrame {
    Q_OBJECT
public:
    explicit Knight(QWidget* parent = nullptr);

    void dropEvent(QDropEvent* event);
    void mousePressEvent(QMouseEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dragEnterEvent(QDragEnterEvent *event);
};


#endif //EXCALIBUR_KNIGHT_H
