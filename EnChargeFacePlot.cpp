//
// Created by user on 14/11/16.
//

#include "EnChargeFacePlot.h"
#include "EnCharge.h"

void EnChargeFacePlot::tourner(string direction) {
    Etat::tourner(direction);
}

int EnChargeFacePlot::peser() {
    return 30;
}

int EnChargeFacePlot::evaluerPlot() {
    return 3;
}

Etat EnChargeFacePlot::poser() {
    return EnCharge::instance();
}

EnChargeFacePlot* EnChargeFacePlot::singleton = new EnChargeFacePlot();

EnChargeFacePlot EnChargeFacePlot::instance()
{
    return *singleton;
}