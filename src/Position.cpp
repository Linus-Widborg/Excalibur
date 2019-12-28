#include "Position.h"

Position::Position(int x, int y) : _x(x), _y(y) {

}

bool Position::operator==(const Position& position) const {
    return _x == position._x && _y == position._y;
}

Position::operator QPoint() {
    return QPoint(_x, _y);
}

Position toPosition(QPoint pointToConvert) {
    return Position(pointToConvert.x(), pointToConvert.y());
}
