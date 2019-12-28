#ifndef EXCALIBUR_KNIGHT_H
#define EXCALIBUR_KNIGHT_H

#include "Position.h"

class Knight {
public:
    Knight() = default;
    explicit Knight(Position startPosition);

    bool atPosition(Position positionToCheck) const;
    void move(Position position);

private:
    Position position;

};


#endif //EXCALIBUR_KNIGHT_H
