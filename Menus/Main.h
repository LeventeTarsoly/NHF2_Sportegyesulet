//
// Created by Admin on 2023. 05. 06..
//

#ifndef NHF_SPORTEGYESULET_MAIN_H
#define NHF_SPORTEGYESULET_MAIN_H

#include <iostream>
#include <map>
#include <functional>
#include "../string.h"
#include "Menu.h"
#include "Add.h"
#include "Manageteams.h"
#include "Lists.h"

using namespace std;

//TODO
inline void BaseData(){
    std::cout <<"Hello";
}

class Mainmenu : public Menu {
public:
    static Mainmenu mainmenu;
    Mainmenu()
            : Menu(
            {
                    {1, "Manage Teams"},
                    {2, "Lists"},
                    {3, "Base Data"},
                    {4, "Close and Save"}
            },
            {
                    {1, BaseData},
                    {2, BaseData},
                    {3, BaseData}
            },
            4
    )
    {}
};


#endif //NHF_SPORTEGYESULET_MAIN_H
