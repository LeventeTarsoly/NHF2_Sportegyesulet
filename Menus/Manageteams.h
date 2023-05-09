//
// Created by Admin on 2023. 05. 06..
//

#ifndef NHF_SPORTEGYESULET_TEAMS_H
#define NHF_SPORTEGYESULET_GROUPS_H


#include <iostream>
#include <map>
#include <functional>
#include "../Data/string.h"
#include "Add.h"

using namespace std;

void Manageteamsmenu(){
    int input=0;
    while (input!=4){
        cout << "1.Add Teams"<< endl;
        cout << "2.Modify Team"<< endl;
        cout << "3.Delete Team"<< endl;
        cout << "4.Back"<< endl;
        cin >> input;
        while(input>4 || input<1){
            cout << "Wrong input";
            cin >> input;
        }
        switch (input) {
            case 1:
                break;
            case 2: //TODO Modify
                break;
            case 3: //TODO Delete
                break;
        }
    }
}

//TODO
inline void Modifyteam(){
    std::cout <<"TODO";
}
//TODO
inline void Deleteteam(){
    std::cout <<"TODO";
}



#endif //NHF_SPORTEGYESULET_TEAMS_H
