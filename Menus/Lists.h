//
// Created by Admin on 2023. 05. 06..
//

#ifndef NHF_SPORTEGYESULET_LISTS_H
#define NHF_SPORTEGYESULET_LISTS_H

#include <iostream>
#include <map>
#include <functional>
#include "../Data/string.h"
#include "Teamlists.h"

using namespace std;

//TODO
void Sponsorlist(){
    std::cout <<"TODO";
}
//TODO
void Sponsorsupporlist(){
    std::cout <<"TODO";
}
//TODO
void Supportlist(){
    std::cout <<"TODO";
}

void Listsmenu(){
    int input=0;
    while (input!=4){
        cout << "1.Group lists"<< endl;
        cout << "2.Sponsor list"<< endl;
        cout << "3.Sponsor Support list"<< endl;
        cout << "4.Support list"<< endl;
        cout << "5.Back"<< endl;
        cin >> input;
        while(input>4 || input<1){
            cout << "Wrong input";
            cin >> input;
        }
        switch (input) {
            case 1:
                break;
            case 2: //TODO Sponsor list
                break;
            case 3: //TODO spons supp list
                break;
            case 4: //TODO supp list
                break;
        }
    }
}

#endif //NHF_SPORTEGYESULET_LISTS_H
