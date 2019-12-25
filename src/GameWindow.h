#ifndef EXCALIBUR_GAMEWINDOW_H
#define EXCALIBUR_GAMEWINDOW_H


#include <QtWidgets/QWidget>

class GameWindow : public QWidget {
    Q_OBJECT

public:
    explicit GameWindow(QWidget* parent = NULL);
};


#endif //EXCALIBUR_GAMEWINDOW_H
