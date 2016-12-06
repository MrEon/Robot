//
// Created by user on 14/11/16.
//

#include "AVide.h"

AVide* AVide::singleton = new AVide();

AVide AVide::instance()
{
    return *singleton;
}