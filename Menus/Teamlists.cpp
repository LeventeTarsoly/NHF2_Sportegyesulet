#include "Teamlists.h"

//TODO
inline void Footballlist(){
    cout <<"TODO"<< endl;
}
//TODO
inline void Basketballlist(){
    std::cout <<"TODO"<< endl;
}
//TODO
inline void Handballlist(){
    std::cout <<"TODO"<< endl;
}

inline void Teamlistsmenu(){
    int input=0;
    while (input!=4){
        cout << "1.List of Football Teams"<< endl;
        cout << "2.List of Basketball Teams"<< endl;
        cout << "3.List of Handball Teams"<< endl;
        cout << "4.Back"<< endl;
        cin >> input;
        while(input>4 || input<1){
            cout << "Wrong input"<< endl;
            cin >> input;
        }
        switch (input) {
            case 1: Footballlist();
                break;
            case 2: Basketballlist();
                break;
            case 3: Handballlist();
                break;
        }
    }
}
