#include "gtest/gtest.h"
#include "../src/Knight.h"

TEST(Knight, hasPosition) {
    //Setup
    Position position(100, 100);
    //Execute
    Knight knight(position);
    //Verify
    EXPECT_TRUE(knight.atPosition(position));
}

TEST(Knight, hasAnotherPosition) {
    //Setup
    Position position(100, 100);
    Position anotherPosition(50, 50);
    //Execute
    Knight knight(position);
    //Verify
    EXPECT_FALSE(knight.atPosition(anotherPosition));
}

TEST(Knight, move) {
    //Setup
    Knight knight(Position(10, 20));
    //Execute
    knight.move(Position(25, 35));
    //Verify
    EXPECT_TRUE(knight.atPosition(Position(25, 35)));
}