//
// Created by user on 04/01/17.
//

#ifndef ROBOT_COMMANDE_H
#define ROBOT_COMMANDE_H

#include <iostream>
#include <map>
#include <stack>
#include "Invocateur.h"

class Commande {
protected:
    static std::map<std::string, Commande> *cmds_map;
public:
    static std::stack<Commande> command_stack;

    void cmds(){
        cmds_map = std::map<std::string, Commande>;
    }
    virtual Commande ConstructeurVirtuel();
    virtual void execute();
    virtual void undo();
    static Commande * nouvelleCommande(std::string cmd){
        cmds_map[cmd] = this;
    }



};


#endif //ROBOT_COMMANDE_H
