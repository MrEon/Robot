//
// Created by user on 14/11/16.
//

#ifndef ROBOT_ENROUTE_H
#define ROBOT_ENROUTE_H


#include "Etat.h"
#include "Fige.h"

class EnRoute: public Etat {
    virtual Etat saisir();
    virtual Fige figer();
    virtual Etat repartir();
};


#endif //ROBOT_ENROUTE_H
