#include "Knight.h"

Knight::Knight(QWidget *parent) : QFrame(parent) {
    resize(50, 53);
    setStyleSheet("background-image: url(./images/Knight.png); background-repeat: no-repeat");
}
