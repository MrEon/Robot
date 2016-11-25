//
// Created by user on 14/11/16.
//

#include "Exception.h"

#ifndef ROBOT_ACTIFEXCEPTION_H
#define ROBOT_ACTIFEXCEPTION_H

#endif //ROBOT_ACTIFEXCEPTION_H

class actifException: public Exception{

public:
    void print(){
        cout<<"ACTIF EXCEPTION: deja en mouvement!"<<endl;
    }
};
