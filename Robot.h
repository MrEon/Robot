//
// Created by user on 14/11/16.
//
#include <string>
#include "Position.h"
#include "Etat.h"
#include "Objet.h"
#include "Plot.h"
#include "AVide.h"

#ifndef ROBOT_ROBOT_H
#define ROBOT_ROBOT_H

using namespace std;
class Robot {
private:
    string direction;
    Position position;
    Etat etat;
    Objet *objet;
    Plot *plot;

public:
    Robot(string direction = "nord", Position position = Position(0, 0)): direction(direction), position(position){
        etat = AVide();
        objet = nullptr;
        plot = nullptr;
    }

    void avancer(int x, int y);
    void tourner(string new_dir);
    void saisir(Objet &o);
    void poser();
    int peser();
    void rencontrerPlot(Plot &p);
    int evaluerPlot();
    void figer();
    void repartir();
    void afficher();


};


#endif //ROBOT_ROBOT_H
