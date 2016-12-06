//
// Created by user on 14/11/16.
//

#include "AVideFacePlot.h"

AVideFacePlot* AVideFacePlot::singleton = new AVideFacePlot();

int AVideFacePlot::evaluerPlot() { }

Etat AVideFacePlot::saisir() {
    return EnCharge::instance();
}

AVideFacePlot AVideFacePlot::instance()
{
    return *singleton;
}