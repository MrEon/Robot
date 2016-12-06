//
// Created by user on 14/11/16.
//

#include <iostream>
#include "Robot.h"
#include "Etat.h"

void Robot::avancer(int x, int y)
{
    
}

void Robot::saisir( Objet &o) {
    try {
        this->etat = etat.saisir();
        this->objet= &o;
    }catch (chargeException c){
        c.print();
    }
}
void Robot::figer() {
    try {
        this->etat = etat.figer(etat);
    }catch (figeException f){
        f.print();
    }
}
void Robot::repartir() {
    try {
        this->etat = etat.repartir();
    }catch (actifException a){
        a.print();
    }
}

void Robot::afficher() {
    cout<<"Direction: "<< this->direction<<endl;
    cout<<"Position: ("<< this->position.x << ", "<<this->position.y<<")"<<endl;
    //cout<<"Etat: "<<this->etat.afficher()<<endl;
}
