#include <limits>
#include "Lists.h"


//TODO Sponsorlist
inline void Sponsorlist(Club& club, String& name){
    std::cout <<"TODO"<< endl;
}
//TODO SponsorSupporlist
inline void SponsorSupporlist(Club& club){
    std::cout <<"TODO"<< endl;
}
//TODO Supportlist
inline void Supportlist(Club& club){
    std::cout <<"TODO"<< endl;
}

void Listsmenu(Club& club){
    int input=0;
    while (input!=5){
        cout << "1.Group lists"<< endl;
        cout << "2.Sponsor list"<< endl;
        cout << "3.Sponsor Support list"<< endl;
        cout << "4.Support list"<< endl;
        cout << "5.Back"<< endl;
        cin >> input;
        while(input>5 || input<1){
            cout << "Wrong input"<< endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> input;
        }
        switch (input) {
            case 1: Teamlistsmenu(club);
                break;
            case 2: Sponsorlist(club);
                break;
            case 3: SponsorSupporlist(club);
                break;
            case 4: Supportlist(club);
                break;
        }
    }
}