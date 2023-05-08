//
// Created by Admin on 2023. 05. 06..
//

#ifndef NHF_SPORTEGYESULET_TEAMS_H
#define NHF_SPORTEGYESULET_GROUPS_H


#include <iostream>
#include <map>
#include <functional>
#include "../string.h"
#include "Menu.h"
#include "Add.h"

using namespace std;

//TODO
inline void Modifyteam(){
    std::cout <<"Hello";
}
//TODO
inline void Deleteteam(){
    std::cout <<"Hello";
}

class Manageteamsmenu : public Menu {
public:
    static Manageteamsmenu manageteamsmenu;

    Manageteamsmenu()
            : Menu(
            {
                    {1, "Add Team"},
                    {2, "Modify Teams"},
                    {3, "Delete Teams"}
            },
            {
                    {1, [](){ AddMenu::addmenu.display(); }},
                    {2, Modifyteam},
                    {3, Deleteteam}
            },
            4
    )
    {}
};



#endif //NHF_SPORTEGYESULET_TEAMS_H
