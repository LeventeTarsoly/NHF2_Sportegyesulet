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
///Focicsapat hozz�ad�sa
inline void Addfootballteam(Club& club);
///Kos�rcsapat hozz�ad�sa
inline void Addbasketballteam(Club& club);
///K�zicsapat hozz�ad�sa
inline void Addhandballteam(Club& club);
///Hozz�ad�s men�je
void Addmenu(Club& club);


#endif //NHF_SPORTEGYESULET_ADD_H
