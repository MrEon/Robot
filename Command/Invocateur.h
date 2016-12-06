//
// Created by Renaud on 29/11/2016.
//

#ifndef ROBOT_INVOCATEUR_H
#define ROBOT_INVOCATEUR_H
#include <string>

using std::string;

class Invocateur {
private:
    string cmd;
public:
    Invocateur(string cmd);
    void parseCommand();
    string word();
    int x();
    int y();
    string dir();
};

#endif //ROBOT_INVOCATEUR_H
