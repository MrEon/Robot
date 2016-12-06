//
// Created by user on 14/11/16.
//

#include "EnCharge.h"

EnCharge* EnCharge::singleton = new EnCharge();

EnCharge EnCharge::instance()
{
    return *singleton;
}