//
// Created by user on 04/01/17.
//

#include "Commande.h"

command_stack = new std::stack<Commande>;

void Commande::undo() {
    command_stack.pop();
}
