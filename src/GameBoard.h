#ifndef EXCALIBUR_GAMEBOARD_H
#define EXCALIBUR_GAMEBOARD_H


#include <QtWidgets/QFrame>

class GameBoard : public QFrame
{
    Q_OBJECT

public:
    explicit GameBoard(QWidget* parent = nullptr);
};


#endif //EXCALIBUR_GAMEBOARD_H
