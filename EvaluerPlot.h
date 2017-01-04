//
// Created by user on 04/01/17.
//

#ifndef ROBOT_EVALUERPLOT_H
#define ROBOT_EVALUERPLOT_H


#include "RobotCommande.h"

class EvaluerPlot :public RobotCommande{
private:
    static EvaluerPlot myCommand;
public:
    void constructeurVirtuel();
    void execute();
    void undo();
};


#endif //ROBOT_EVALUERPLOT_H
