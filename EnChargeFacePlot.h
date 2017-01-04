//
// Created by user on 14/11/16.
//

#ifndef ROBOT_ENCHARGEFACEPLOT_H
#define ROBOT_ENCHARGEFACEPLOT_H


#include "EnRoute.h"

class EnChargeFacePlot: public EnRoute {

protected:
    EnChargeFacePlot() { }

private:
    static EnChargeFacePlot* singleton;

public:
    static EnChargeFacePlot instance();
    void tourner(string direction);
    int peser();
    int evaluerPlot();
    Etat poser();


};


#endif //ROBOT_ENCHARGEFACEPLOT_H
