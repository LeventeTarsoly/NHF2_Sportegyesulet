//
// Created by Admin on 2023. 05. 06..
//

#ifndef NHF_SPORTEGYESULET_TEAMLISTS_H
#define NHF_SPORTEGYESULET_TEAMLISTS_H

#include <iostream>
#include <map>
#include <functional>
#include "../Data/string.h"

using namespace std;
//TODO
void Listoffootballteams(){
    cout <<"TODO";
}
//TODO
void Listofbasketballteams(){
    std::cout <<"TODO";
}
//TODO
void Listofhandballteams(){
    std::cout <<"TODO";
}

void Teamlistsmenu(){
    int input=0;
    while (input!=4){
        cout << "1.List of Football Teams"<< endl;
        cout << "2.List of Basketball Teams"<< endl;
        cout << "3.List of Handball Teams"<< endl;
        cout << "4.Back"<< endl;
        cin >> input;
        while(input>4 || input<1){
            cout << "Wrong input";
            cin >> input;
        }
        switch (input) {
            case 1: //TODO Footlist
                break;
            case 2: //TODO Basketlist
                break;
            case 3: //TODO Handlist
                break;
        }
    }
}

#endif //NHF_SPORTEGYESULET_TEAMLISTS_H
