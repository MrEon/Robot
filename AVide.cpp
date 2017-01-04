//
// Created by user on 14/11/16.
//

#include "AVide.h"
#include "AVideFacePlot.h"

AVide* AVide::singleton = new AVide();

AVide AVide::instance()
{
    return *singleton;
}

Etat AVide::rencontrerPlot(Plot p){
    return AVideFacePlot::instance();
}

void  AVide::avancer(int x, int y) { }