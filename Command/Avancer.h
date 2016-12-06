//
// Created by Renaud on 29/11/2016.
//

#ifndef ROBOT_AVANCER_H
#define ROBOT_AVANCER_H

#include "Commande.h"

class Avancer : public Commande {
private:
    int x, y;
public:
    Avancer(int, int);
    ~Avancer() { }
    virtual void execute();
};

#endif //ROBOT_AVANCER_H
