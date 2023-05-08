//
// Created by Admin on 2023. 05. 06..
//

#ifndef NHF_SPORTEGYESULET_ADD_H
#define NHF_SPORTEGYESULET_ADD_H

#include <iostream>
#include <map>
#include <functional>
#include "../string.h"
#include "Menu.h"

using namespace std;
//TODO
inline void Addfootballteam(){
    cout <<"Hello";
}
//TODO
inline void Addbasketballteam(){
    std::cout <<"Hello";
}
//TODO
inline void Addhandballteam(){
    std::cout <<"Hello";
}

class AddMenu : public Menu {
public:
    static AddMenu addmenu;

    AddMenu()
            : Menu(
            {
                    {1, "Add Football Team"},
                    {2, "Add Basketball Team"},
                    {3, "Add Handball Team"}
            },
            {
                    {1, Addfootballteam},
                    {2, Addbasketballteam},
                    {3, Addhandballteam}
            },
            4
    )
    {}
};


#endif //NHF_SPORTEGYESULET_ADD_H
