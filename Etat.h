//
// Created by user on 14/11/16.
//

#ifndef ROBOT_ETAT_H
#define ROBOT_ETAT_H

#include "chargeException.h"
#include "actifException.h"
#include "Fige.h"

class Etat {

public:
    Etat() { }

    virtual Etat saisir(){
        throw chargeException();
    }

    virtual Fige figer(){
        return Fige();
    }

    virtual Etat repartir(){
        throw actifException();
    }
};


#endif //ROBOT_ETAT_H
