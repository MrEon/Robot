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
    int peser();
    Etat rencontrerPlot(Plot p);
    void avancer(int x, int y);

};


#endif //ROBOT_ENCHARGE_H
