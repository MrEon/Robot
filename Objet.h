//
// Created by user on 14/11/16.
//

#ifndef ROBOT_OBJET_H
#define ROBOT_OBJET_H


class Objet {
private:
    int poids;
public:

    Objet(int poids = 5) : poids(poids) { }

    int peser(){
        return poids;
    }
};


#endif //ROBOT_OBJET_H
