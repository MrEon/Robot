//
// Created by Renaud on 29/11/2016.
//

#ifndef ROBOT_TOURNER_H
#define ROBOT_TOURNER_H
#include <string>

#include "Commande.h"

using std::string;

class Tourner : public Commande {
private:
    string dir;
public:
    Tourner(string d);
    ~Tourner() { }
    virtual void execute();
};

#endif //ROBOT_TOURNER_H
