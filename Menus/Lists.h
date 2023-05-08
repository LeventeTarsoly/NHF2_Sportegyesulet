//
// Created by Admin on 2023. 05. 06..
//

#ifndef NHF_SPORTEGYESULET_LISTS_H
#define NHF_SPORTEGYESULET_LISTS_H

#include <iostream>
#include <map>
#include <functional>
#include "../string.h"
#include "Menu.h"
#include "Teamlists.h"

using namespace std;

//TODO
inline void Sponsorlist(){
    std::cout <<"Hello";
}
//TODO
inline void Sponsorsupporlist(){
    std::cout <<"Hello";
}
//TODO
inline void Supportlist(){
    std::cout <<"Hello";
}

class Listsmenu : public Menu {
public:
    static Listsmenu listsmenu;
    Listsmenu()
            : Menu(
            {
                    {1, "Lists of Teams"},
                    {2, "List of Football Teams of a Sponsor"},
                    {3, "List of Football Teams with Sponsor Support"},
                    {4, "List of Handball Teams sorted by Support"}
            },
            {
                    {1, [](){ TeamlistsMenu::teamlistsMenu.display(); }},
                    {2, Sponsorlist},
                    {3, Sponsorsupporlist},
                    {4, Supportlist}
            },
            4
    )
    {}
};

#endif //NHF_SPORTEGYESULET_LISTS_H
