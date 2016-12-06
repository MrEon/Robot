//
// Created by Renaud on 29/11/2016.
//

#include <cstring>
#include <cstdlib>
#include "Invocateur.h"
#include "Commande.h"
#include "Avancer.h"
#include "Tourner.h"


Invocateur::Invocateur(string cmd) {
    this->cmd = cmd;
}

void Invocateur::parseCommand() {
    if (word(cmd).equals("AVANCER"))
    {
        Commande c = Avancer(x(),y());
    }
    else if (word().equals("TOURNER"))
    {
        Commande c = Tourner(dir());
    }
}

string Invocateur::word() // Retourne le mot clef d'une commande
{
    return cmd;
}

int Invocateur::x() // Retourne le premier parametre de la commande AVANCER
{
    return atoi(cmd);
}

int Invocateur::y() // Retourne le deuxieme parametre de la commande AVANCER
{
    return atoi(cmd);
}

string Invocateur::dir() // Retourne le parametre de la commande TOURNER
{
    return cmd;
}