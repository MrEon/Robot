//
// Created by user on 14/11/16.
//

#ifndef ROBOT_ETAT_H
#define ROBOT_ETAT_H

#include "chargeException.h"
#include "actifException.h"
#include "Plot.h"
#include <iostream>
#include <map>

using namespace std;

class Etat {
public:
    Etat() { }
    ~Etat() { }
    Etat saisir(){
        throw chargeException();
    }

    virtual Etat figer(Etat etat){}
    virtual void avancer(int x, int y){};
    virtual void tourner(string direction){};
    virtual Etat poser(){};
    virtual int peser(){};
    virtual Etat rencontrerPlot(Plot p){};
    virtual int evaluerPlot(){};
    virtual Etat figer();

    Etat repartir(){
        throw actifException();
    }

};


#endif //ROBOT_ETAT_H
