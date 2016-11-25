//
// Created by user on 14/11/16.
//

#ifndef ROBOT_POSITION_H
#define ROBOT_POSITION_H


class Position {
public:
    int x, y;

    Position(int x, int y) : x(x), y(y) { }

    void move(int X, int Y){
        x = X;
        y = Y;
    }
};


#endif //ROBOT_POSITION_H
