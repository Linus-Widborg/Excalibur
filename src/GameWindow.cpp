#include <QtWidgets/QGridLayout>
#include "GameWindow.h"

GameWindow::GameWindow(QWidget* parent) : QWidget(parent), gameBoard(new GameBoard) {

    show();
}
