//
// Created by Admin on 2023. 05. 06..
//

#ifndef NHF_SPORTEGYESULET_TEAMLISTS_H
#define NHF_SPORTEGYESULET_TEAMLISTS_H

#include <iostream>
#include <map>
#include <functional>
#include "../string.h"
#include "Menu.h"

using namespace std;
//TODO
inline void Listoffootballteams(){
    cout <<"Hello";
}
//TODO
inline void Listofbasketballteams(){
    std::cout <<"Hello";
}
//TODO
inline void Listofhandballteams(){
    std::cout <<"Hello";
}

class TeamlistsMenu : public Menu {
public:
    static TeamlistsMenu teamlistsMenu;
    TeamlistsMenu()
            : Menu(
            {
                    {1, "List Of Football Teams"},
                    {2, "List Of Basketball Teams"},
                    {3, "List Of Handball Teams"}
            },
            {
                    {1, Listoffootballteams},
                    {2, Listofbasketballteams},
                    {3, Listofhandballteams}
            },
            4
    )
    {}
};


#endif //NHF_SPORTEGYESULET_TEAMLISTS_H
