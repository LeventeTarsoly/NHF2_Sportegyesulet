//
// Created by Admin on 2023. 05. 06..
//

#ifndef NHF_SPORTEGYESULET_ADD_H
#define NHF_SPORTEGYESULET_ADD_H

#include <iostream>
#include <map>
#include <functional>
#include "string.h"
#include "Club.h"
///Focicsapat hozzáadása
inline void Addfootballteam(Club& club);
///Kosárcsapat hozzáadása
inline void Addbasketballteam(Club& club);
///Kézicsapat hozzáadása
inline void Addhandballteam(Club& club);
///Hozzáadás menüje
void Addmenu(Club& club);


#endif //NHF_SPORTEGYESULET_ADD_H
