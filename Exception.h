//
// Created by user on 15/11/16.
//

#ifndef ROBOT_EXCEPTION_H
#define ROBOT_EXCEPTION_H

#include <iostream>
using namespace std;
class Exception{
public:
    virtual void print(){
        cout<<"EXCEPTION!"<<endl;
    }
};
#endif //ROBOT_EXCEPTION_H
