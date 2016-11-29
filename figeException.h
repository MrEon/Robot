//
// Created by user on 14/11/16.
//
#include "Exception.h"

#ifndef ROBOT_FIGEEXCEPTION_H
#define ROBOT_FIGEEXCEPTION_H

class figeException : public Exception{

public:
    void print(){
        cout<<"FIGE EXCEPTION: deja fige!"<<endl;
    }
};


#endif //ROBOT_FIGEEXCEPTION_H

