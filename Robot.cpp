//
// Created by user on 14/11/16.
//

#include "Robot.h"
void Robot::saisir(const Objet &o) {
    this->etat = etat.saisir();
}
void Robot::figer() {
    this->etat = etat.figer();
}
void Robot::repartir() {
    this->etat = etat.repartir();
}