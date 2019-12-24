#include <QtWidgets/QPlainTextEdit>
#include <QMenuBar>

#include "MainWindow.h"

MainWindow::MainWindow() {
    setWindowTitle(tr("Excalibur"));
    createMenu();
}

void MainWindow::createMenu() {
    QMenu* fileMenu = menuBar()->addMenu(tr("&File"));
}
