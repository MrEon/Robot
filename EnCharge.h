//
// Created by user on 14/11/16.
//

#ifndef ROBOT_ENCHARGE_H
#define ROBOT_ENCHARGE_H


#include "Etat.h"

class EnCharge: public Etat {

protected:
    EnCharge() { }

private:
    static EnCharge* singleton;

public:
    static EnCharge instance();

};


#endif //ROBOT_ENCHARGE_H
