#include <limits>
#include "Mainmenu.h"
#include "Club.h"
#include "Manageteams.h"
#include "test.h"

using namespace std;

inline void BaseData(const Club& club){
    cout << "Total count of Teams: "<<club.length()<< endl;
    cout << "Total cout of athletes"<<club.totalathletes()<< endl;
    cout << "Total income for the sports club per year:"<<club.totalprice()<< endl;
}


void Mainmenu(Club& club){
    cout << "  _____   _   _     _       ____                           _              ____   _           _     \n"
                 " |  ___| (_) | |_  | |_    / ___|   _ __     ___    _ __  | |_   ___     / ___| | |  _   _  | |__  \n"
                 " | |_    | | | __| | __|   \\___ \\  | '_ \\   / _ \\  | '__| | __| / __|   | |     | | | | | | | '_ \\ \n"
                 " |  _|   | | | |_  | |_     ___) | | |_) | | (_) | | |    | |_  \\__ \\   | |___  | | | |_| | | |_) |\n"
                 " |_|     |_|  \\__|  \\__|   |____/  | .__/   \\___/  |_|     \\__| |___/    \\____| |_|  \\__,_| |_.__/ \n"
                 "                                   |_|                                                             " << endl;
    int input=0;
    while (input!=5){
        cout << "1.Manage Teams"<< endl;
        cout << "2.List of Teams"<< endl;
        cout << "3.Base Data"<< endl;
        cout << "4.Run Tests"<< endl;
        cout << "5.Save and Quit"<< endl;
        cin >> input;
        ///intes hibakezelés
        while(input>5 || input<1){
            cout << "Wrong input"<< endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> input;
        }
        switch (input) {
            case 1: Manageteamsmenu(club);
                break;
            case 2: club.print();
                break;
            case 3: BaseData(club);
                break;
            case 4: Tests();
                break;
        }
    }
}