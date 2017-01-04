//
// Created by user on 14/11/16.
//

#include "AVideFacePlot.h"

AVideFacePlot* AVideFacePlot::singleton = new AVideFacePlot();

void AVideFacePlot::tourner(string direction) {
}

int AVideFacePlot::evaluerPlot() {
    return 2;
}

Etat AVideFacePlot::saisir() {
    return EnCharge::instance();
}

AVideFacePlot AVideFacePlot::instance()
{
    return *singleton;
}