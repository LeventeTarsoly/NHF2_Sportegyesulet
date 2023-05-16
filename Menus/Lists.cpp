#include "Lists.h"


//TODO
inline void Sponsorlist(){
    std::cout <<"TODO"<< endl;
}
//TODO
inline void SponsorSupporlist(){
    std::cout <<"TODO"<< endl;
}
//TODO
inline void Supportlist(){
    std::cout <<"TODO"<< endl;
}

inline void Listsmenu(){
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
            cin >> input;
        }
        switch (input) {
            case 1: Teamlistsmenu();
                break;
            case 2: Sponsorlist();
                break;
            case 3: SponsorSupporlist();
                break;
            case 4: Supportlist();
                break;
        }
    }
}