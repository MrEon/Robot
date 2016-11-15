//
// Created by user on 14/11/16.
//

#ifndef ROBOT_FIGE_H
#define ROBOT_FIGE_H


#include "Etat.h"
#include "figeException.h"

class Fige: public Etat
{
public:
    Fige(){ }
    Fige figer(){
        throw figeException();
    }
};


#endif //ROBOT_FIGE_H
