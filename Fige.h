//
// Created by user on 14/11/16.
//

#ifndef ROBOT_FIGE_H
#define ROBOT_FIGE_H


#include "Etat.h"
#include "figeException.h"

class Fige: public Etat
{
private:
    Etat vieilEtat;
public:
    Fige(Etat etat) : vieilEtat(etat){ }

    ~Fige() { }

    Etat figer(Etat etat){
        throw figeException();
    }

    Etat repartir(){
        return vieilEtat;
    }
};


#endif //ROBOT_FIGE_H
