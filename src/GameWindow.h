#ifndef EXCALIBUR_GAMEWINDOW_H
#define EXCALIBUR_GAMEWINDOW_H


#include <QtWidgets/QWidget>
#include "GameBoard.h"

class GameWindow : public QWidget {
    Q_OBJECT

public:
    explicit GameWindow(QWidget* parent = NULL);

private:
    GameBoard* gameBoard;
};


#endif //EXCALIBUR_GAMEWINDOW_H
