#include <limits>
#include "Teamlists.h"

//TODO Footballlist(
inline void Footballlist(Club& club){
    cout <<"TODO"<< endl;
}
//TODO Basketballlist
inline void Basketballlist(Club& club){
    std::cout <<"TODO"<< endl;
}
//TODO Handballlist
inline void Handballlist(Club& club){
    std::cout <<"TODO"<< endl;
}

void Teamlistsmenu(Club& club){
    int input=0;
    while (input!=4){
        cout << "1.List of Football Teams"<< endl;
        cout << "2.List of Basketball Teams"<< endl;
        cout << "3.List of Handball Teams"<< endl;
        cout << "4.Back"<< endl;
        cin >> input;
        while(input>4 || input<1){
            cout << "Wrong input"<< endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> input;
        }
        switch (input) {
            case 1: Footballlist(club);
                break;
            case 2: Basketballlist(club);
                break;
            case 3: Handballlist(club);
                break;
        }
    }
}
