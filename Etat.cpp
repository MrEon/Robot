//
// Created by user on 29/11/16.
//

#include <iostream>
#include "Etat.h"

using namespace std;

Etat Etat::m_instance=Etat();

Etat::Etat()
{
    cout<<"Creation"<<endl;
}

Etat::~Etat()
{
    cout<<"Destruction"<<endl;
}

Etat& Etat::Instance(Etat e)
{
    return m_instance;
}