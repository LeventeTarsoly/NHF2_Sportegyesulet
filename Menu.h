//
// Created by TLevente on 04/05/2023.
//

#ifndef NHF_SPORTEGYESULET_MENU_H
#define NHF_SPORTEGYESULET_MENU_H

#include <iostream>
#include <map>
#include <functional>
#include "List.h"

class Menu {
    List<std::map<int, std::function<void()>>> menu;
public:
    void display(){
        
    }
};


#endif //NHF_SPORTEGYESULET_MENU_H
