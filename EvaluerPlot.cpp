//
// Created by user on 04/01/17.
//

#include "EvaluerPlot.h"

void EvaluerPlot::constructeurVirtuel() {
    //myCommand("EvaluerPlot");
}

void EvaluerPlot::execute() {
    RobotCommande::robot->evaluerPlot();
    RobotCommande::command_stack.push(this);
}

void EvaluerPlot::undo() {
    Commande::undo();
}

