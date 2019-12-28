#ifndef EXCALIBUR_GAMEBOARD_H
#define EXCALIBUR_GAMEBOARD_H

#include <QtWidgets/QFrame>

#include "Knight.h"

class GameBoard : public QFrame
{
    Q_OBJECT

public:
    explicit GameBoard(QWidget* parent = nullptr);

    void dropEvent(QDropEvent* event);
    void mousePressEvent(QMouseEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dragEnterEvent(QDragEnterEvent *event);

private:
    Knight knight;

    void createTokens();
};


#endif //EXCALIBUR_GAMEBOARD_H
