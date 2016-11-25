#include <iostream>
#include "Robot.h"

using namespace std;

int main() {
    Robot robot = Robot("Nord", Position(0,1));
    robot.afficher();
    return 0;
}