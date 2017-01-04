//
// Created by user on 14/11/16.
//

#ifndef ROBOT_AVIDE_H
#define ROBOT_AVIDE_H


#include "EnRoute.h"

class AVide : public EnRoute{

protected:
    AVide() { }

private:
    static AVide* singleton;

public:
    static AVide instance();
    Etat rencontrerPlot(Plot p);
    void avancer(int x, int y);
};


#endif //ROBOT_AVIDE_H
