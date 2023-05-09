//
// Created by Admin on 2023. 05. 06..
//

#ifndef NHF_SPORTEGYESULET_ADD_H
#define NHF_SPORTEGYESULET_ADD_H

#include <iostream>
#include <map>
#include <functional>
#include "../Data/string.h"

using namespace std;

//TODO
void Addfootballteam(){
    cout <<"TODO";
}
//TODO
void Addbasketballteam(){
    std::cout <<"TODO";
}
//TODO
void Addhandballteam(){
    std::cout <<"TODO";
}

void Addmenu(){
    int input=0;
    while (input!=4){
        cout << "1.Add Football Team"<< endl;
        cout << "1.Add Basketball Team"<< endl;
        cout << "3.Add Handball Team"<< endl;
        cout << "4.Back"<< endl;
        cin >> input;
        while(input>4 || input<1){
            cout << "Wrong input";
            cin >> input;
        }
        switch (input) {
            case 1: //TODO add
                break;
            case 2: //TODO add
                break;
            case 3: //TODO add
                break;
        }
    }
}



#endif //NHF_SPORTEGYESULET_ADD_H
