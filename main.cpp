#include <iostream>
#include "Robot.h"
#include "Command/Invocateur.h"

using namespace std;

int main() {
    Robot robot = Robot("Nord", Position(0,1));
    robot.afficher();
    robot.avancer(10,20);
    robot.afficher();
    Invocateur inv = Invocateur("AVANCER 4 5");
    return 0;
}