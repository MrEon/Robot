//
// Created by user on 14/11/16.
//

#include "Exception.h"

#ifndef ROBOT_CHARGEEXCEPTION_H
#define ROBOT_CHARGEEXCEPTION_H


class chargeException : public Exception{

public:
    void print(){
        cout<<"CHARGE EXCEPTION: deja en possession d'un objet!"<<endl;
    }
};


#endif //ROBOT_CHARGEEXCEPTION_H

