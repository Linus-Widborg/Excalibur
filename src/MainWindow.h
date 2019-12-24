#ifndef EXCALIBUR_MAINWINDOW_H
#define EXCALIBUR_MAINWINDOW_H

#include <QtWidgets/QMainWindow>
class QPlainTextEdit;

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow();

private:
    void createMenu();

    QWidget* gameWindow;
};


#endif //EXCALIBUR_MAINWINDOW_H
