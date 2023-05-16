//
// Created by Admin on 2023. 05. 06..
//

#include "Add.h"
using namespace std;

//TODO
inline void Addfootballteam(){
    cout <<"TODO"<< endl;
}
//TODO
inline void Addbasketballteam(){
    std::cout <<"TODO"<< endl;
}
//TODO
inline void Addhandballteam(){
    std::cout <<"TODO"<< endl;
}

inline void Addmenu(){
    int input=0;
    while (input!=4){
        cout << "1.Add Football Team"<< endl;
        cout << "1.Add Basketball Team"<< endl;
        cout << "3.Add Handball Team"<< endl;
        cout << "4.Back"<< endl;
        cin >> input;
        while(input>4 || input<1){
            cout << "Wrong input"<< endl;
            cin >> input;
        }
        switch (input) {
            case 1: Addfootballteam();
                break;
            case 2: Addbasketballteam();
                break;
            case 3: Addhandballteam();
                break;
        }
    }
}
