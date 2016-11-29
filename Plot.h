//
// Created by user on 14/11/16.
//

#ifndef ROBOT_PLOT_H
#define ROBOT_PLOT_H


class Plot {
private:
    int hauteur;
public:
    Plot(int taille = 100): hauteur(taille){ }

    int evaluerPlot(){
        return hauteur;
    }
};


#endif //ROBOT_PLOT_H
