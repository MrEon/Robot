//
// Created by Renaud on 29/11/2016.
//

#include <cstring>
#include <cstdlib>
#include <iostream>
#include "Invocateur.h"
#include "Commande.h"
#include "Avancer.h"
#include "Tourner.h"


Invocateur::Invocateur(string cmd) {
    this->cmd = cmd;
    splitCmd();
}

void Invocateur::parseCommand() {
    if (word().compare("AVANCER") == 0)
    {
        Commande c = Avancer(x(),y());
    }
    else if (word().compare("TOURNER") == 0)
    {
        Commande c = Tourner(dir());
    }
}

string Invocateur::word() // Retourne le mot clef d'une commande
{
    return cmdArray[0];
}

int Invocateur::x() // Retourne le premier parametre de la commande AVANCER
{
    const char * x = cmdArray[1].c_str();
    return atoi(x);
}

int Invocateur::y() // Retourne le deuxieme parametre de la commande AVANCER
{
    const char * y = cmdArray[2].c_str();
    return atoi(y);
}

string Invocateur::dir() // Retourne le parametre de la commande TOURNER
{
    return cmdArray[1];
}

void Invocateur::splitCmd()
{
    int a = 0;
    int b = 0;
    int arrIndex = 0;
    cmdArray[0] = "";
    while (b < cmd.length())
    {
        if (cmd[b] == ' ')
        {
            while (a < b)
            {
                cmdArray[arrIndex] += cmd[a];
                a++;
            }
            arrIndex++;
            cmdArray[arrIndex] = "";
        }
        b++;
    }
}