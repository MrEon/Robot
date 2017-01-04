//
// Created by user on 04/01/17.
//

#ifndef ROBOT_ROBOTCOMMANDE_H
#define ROBOT_ROBOTCOMMANDE_H


#include "Commande.h"
#include "Robot.h"

class RobotCommande: public Commande {

public:
    static Robot *robot;
};


#endif //ROBOT_ROBOTCOMMANDE_H
