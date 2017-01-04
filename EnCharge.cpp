//
// Created by user on 14/11/16.
//

#include "EnChargeFacePlot.h"
#include "EnCharge.h"
int EnCharge::peser() {
    return 20;
}

Etat EnCharge::rencontrerPlot(Plot p) {
    return EnChargeFacePlot::instance();
}

void EnCharge::avancer(int x, int y) {
    Etat::avancer(x, y);
}

EnCharge* EnCharge::singleton = new EnCharge();

EnCharge EnCharge::instance()
{
    return *singleton;
}