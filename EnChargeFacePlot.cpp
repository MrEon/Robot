//
// Created by user on 14/11/16.
//

#include "EnChargeFacePlot.h"

EnChargeFacePlot* EnChargeFacePlot::singleton = new EnChargeFacePlot();

EnChargeFacePlot EnChargeFacePlot::instance()
{
    return *singleton;
}