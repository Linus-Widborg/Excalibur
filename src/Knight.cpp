#include "Knight.h"

Knight::Knight(Position startPosition) : position(startPosition) {

}

bool Knight::atPosition(Position positionToCheck) const {
    return position == positionToCheck;
}

void Knight::move(Position newPosition) {
    position = newPosition;
}
