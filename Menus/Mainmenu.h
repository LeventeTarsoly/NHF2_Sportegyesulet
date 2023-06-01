//
// Created by Admin on 2023. 05. 06..
//

#ifndef NHF_SPORTEGYESULET_MAINMENU_H
#define NHF_SPORTEGYESULET_MAINMENU_H

#include <iostream>
#include <map>
#include <functional>
#include "../Data/string.h"
#include "Add.h"
#include "Manageteams.h"
#include "../Data/Club.h"
///Alapadatok kiírása
inline void BaseData(const Club& club);
///F?menü
void Mainmenu(Club& club);


#endif //NHF_SPORTEGYESULET_MAINMENU_H
