//
// Created by user on 14/11/16.
//

#ifndef ROBOT_AVIDEFACEPLOT_H
#define ROBOT_AVIDEFACEPLOT_H

#include "EnCharge.h"
#include "EnRoute.h"

class AVideFacePlot: public EnRoute {
public:
    int evaluerPlot();
    Etat saisir();
};


#endif //ROBOT_AVIDEFACEPLOT_H
