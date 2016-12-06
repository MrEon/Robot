//
// Created by user on 14/11/16.
//

#ifndef ROBOT_AVIDEFACEPLOT_H
#define ROBOT_AVIDEFACEPLOT_H

#include "EnCharge.h"
#include "EnRoute.h"

class AVideFacePlot: public EnRoute {

protected:
    AVideFacePlot() { }

private:
    static AVideFacePlot* singleton;

public:
    static AVideFacePlot instance();
    int evaluerPlot();
    Etat saisir();
};


#endif //ROBOT_AVIDEFACEPLOT_H
