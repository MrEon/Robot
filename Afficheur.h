//
// Created by user on 04/01/17.
//

#ifndef ROBOT_AFFICHEUR_H
#define ROBOT_AFFICHEUR_H


#include "Robot.h"

class Afficheur {
protected:
    Robot robot;
public:
    virtual void update();
};


#endif //ROBOT_AFFICHEUR_H
