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
    split();
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
    return arr[0];
}

int Invocateur::x() // Retourne le premier parametre de la commande AVANCER
{
    return atoi(arr[1]);
}

int Invocateur::y() // Retourne le deuxieme parametre de la commande AVANCER
{
    return atoi(arr[2]);
}

string Invocateur::dir() // Retourne le parametre de la commande TOURNER
{
    return arr[1];
}

void Invocateur::split()
{
    int a = 0;
    int b = 0;
    int arrIndex = 0;
    arr[0] = "";
    while (b < cmd.length())
    {
        if (cmd[b] == ' ')
        {
            while (a < b)
            {
                arr[arrIndex] += cmd[a];
                a++;
            }
            arrIndex++;
            arr[arrIndex] = "";
        }
        b++;
    }
}

int main()
{
    Invocateur inv = Invocateur("AVANCER 4 5");
    string* arr[] = {};
    inv.split(arr);
    std::cout << arr[0] << arr[1] << arr[2];
    return 0;
}