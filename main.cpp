#include <QApplication>
#include <QtWidgets/QHBoxLayout>
#include "src/MainWindow.h"
#include "src/GameBoard.h"
#include "src/Knight.h"

int main(int argc, char** argv)
{
    Q_INIT_RESOURCE(excalibur);

    QApplication excaliburApplication(argc, argv);
    QCoreApplication::setOrganizationName("Wumpuss Game Dev");
    QCoreApplication::setApplicationName("Excalibur The Game");
    QCoreApplication::setApplicationVersion(QT_VERSION_STR);

    MainWindow mainWindow;
    mainWindow.resize(648, 900);
    GameBoard gameBoard(&mainWindow);
    Knight knight(&gameBoard);
    mainWindow.setCentralWidget(&gameBoard);

    mainWindow.show();
    return excaliburApplication.exec();
}
