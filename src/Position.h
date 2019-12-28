#ifndef EXCALIBUR_POSITION_H
#define EXCALIBUR_POSITION_H

#include <QtCore/QPoint>

class Position {
public:
    Position() = default;
    Position(int x, int y);

    bool operator==(const Position& position) const;
    operator QPoint ();
private:
    int _x;
    int _y;
};

Position toPosition(QPoint pointToConvert);

#endif //EXCALIBUR_POSITION_H
