//
// Created by user on 14/11/16.
//

#ifndef ROBOT_PLOT_H
#define ROBOT_PLOT_H


class Plot {
private:
    int taille;
public:
    Plot(int taille = 100): taille(taille){ }

    int evaluerPlot(){
        return taille;
    }
};


#endif //ROBOT_PLOT_H
