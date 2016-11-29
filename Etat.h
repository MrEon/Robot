//
// Created by user on 14/11/16.
//

#ifndef ROBOT_ETAT_H
#define ROBOT_ETAT_H

#include "chargeException.h"
#include "actifException.h"
#include <iostream>
#include <map>

using namespace std;

class Etat {
private:
    map<string, Etat*> &etats();

public:
    Etat() { }
    ~Etat() { }
    Etat saisir(){
        throw chargeException();
    }

    virtual Etat figer(Etat etat){}

    Etat repartir(){
        throw actifException();
    }

};


#endif //ROBOT_ETAT_H
