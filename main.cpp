#include <QApplication>
#include "src/MainWindow.h"
#include "src/GameBoard.h"
#include "src/Knight.h"

int main(int argc, char** argv)
{
    //  Q_INIT_RESOURCE(application);

    QApplication excaliburApplication(argc, argv);
    QCoreApplication::setOrganizationName("Wumpuss Game Dev");
    QCoreApplication::setApplicationName("Excalibur The Game");
    QCoreApplication::setApplicationVersion(QT_VERSION_STR);

    MainWindow mainWindow;
    mainWindow.resize(648, 900);
    mainWindow.show();
    GameBoard gameBoard(&mainWindow);
    gameBoard.show();

    Knight knight(&gameBoard);
    knight.show();
    return excaliburApplication.exec();
}
