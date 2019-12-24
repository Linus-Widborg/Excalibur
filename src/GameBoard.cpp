#include "GameBoard.h"

GameBoard::GameBoard(QWidget* parent) : QFrame(parent)
{
    resize(648, 900);
    setStyleSheet("background-image: url(./images/Camelot.png); background-repeat: no-repeat");
}
