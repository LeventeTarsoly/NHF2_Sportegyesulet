//
// Created by Admin on 2023. 05. 06..
//

#ifndef NHF_SPORTEGYESULET_MAIN_H
#define NHF_SPORTEGYESULET_MAIN_H

#include <iostream>
#include <map>
#include <functional>
#include "../Data/string.h"
#include "Add.h"
#include "Manageteams.h"
#include "Lists.h"

using namespace std;

//TODO
void BaseData(){
    std::cout <<"TODO";
}

void Mainmenu(){
    int input=0;
    while (input!=4){
        cout << "1.Manage Teams"<< endl;
        cout << "2.Lists"<< endl;
        cout << "3.Base Data"<< endl;
        cout << "4.Save and Quit"<< endl;
        cin >> input;
        while(input>4 || input<1){
            cout << "Wrong input";
            cin >> input;
        }
        switch (input) {
            case 1:
                break;
            case 2: //TODO Listsmenu
                break;
            case 3: //TODO Base Data
                break;
        }
    }
}




#endif //NHF_SPORTEGYESULET_MAIN_H
