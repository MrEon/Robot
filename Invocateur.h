//
// Created by user on 04/01/17.
//

#ifndef ROBOT_INVOCATEUR_H
#define ROBOT_INVOCATEUR_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "Objet.h"
#include "Plot.h"
#include "Commande.h"

class Invocateur {

public:
    Objet objet;
    Plot plot;
    int x, y;
    string direction;
    Commande commande;

using namespace std;

    void Invocateur::parseCommand(std::string pathToFile)
    {
        std::string line;
        ifstream myfile(pathToFile);

        if (!myfile.is_open()) // ERROR
        {
            cout << "Unable to open file";
            return;
        }

        while(std::getline(myfile, line))
        {
            istringstream iss(line);
            vector<std::string> commands;
            while (iss) {
                std::string word;
                iss >> word;
                commands.push_back(word);
            }

            cout << line << " : ";

            if(commands.at(0) == "AVANCER")
            {
                x = atoi(commands.at(1).c_str());
                y = atoi(commands.at(2).c_str());
            }
            else if(commands.at(0) == "SAISIR")
            {
                objet = *(new Objet(atoi(commands.at(1).c_str())));
            }
            else if(commands.at(0) == "RENCONTRERPLOT")
            {
                plot = *(new Plot(atoi(commands.at(1).c_str())));
            }
            else if(commands.at(0) == "TOURNER")
            {
                direction = commands.at(1).c_str();
            }

            Commande* commande = Commande::nouvelleCommande(commands.at(0));
            commande->execute();
        }
    }

    
    
};


#endif //ROBOT_INVOCATEUR_H
