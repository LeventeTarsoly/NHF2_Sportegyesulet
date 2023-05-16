#include "Main.h"


//TODO
inline void BaseData(){
    std::cout <<"TODO"<< endl;
}

inline void Mainmenu(){
    std::cout << "  _____   _   _     _       ____                           _              ____   _           _     \n"
                 " |  ___| (_) | |_  | |_    / ___|   _ __     ___    _ __  | |_   ___     / ___| | |  _   _  | |__  \n"
                 " | |_    | | | __| | __|   \\___ \\  | '_ \\   / _ \\  | '__| | __| / __|   | |     | | | | | | | '_ \\ \n"
                 " |  _|   | | | |_  | |_     ___) | | |_) | | (_) | | |    | |_  \\__ \\   | |___  | | | |_| | | |_) |\n"
                 " |_|     |_|  \\__|  \\__|   |____/  | .__/   \\___/  |_|     \\__| |___/    \\____| |_|  \\__,_| |_.__/ \n"
                 "                                   |_|                                                             " << std::endl;
    int input=0;
    while (input!=4){
        cout << "1.Manage Teams"<< endl;
        cout << "2.Lists"<< endl;
        cout << "3.Base Data"<< endl;
        cout << "4.Save and Quit"<< endl;
        cin >> input;
        while(input>4 || input<1){
            cout << "Wrong input"<< endl;
            cin >> input;
        }
        switch (input) {
            case 1: Manageteamsmenu();
                break;
            case 2: Listsmenu();
                break;
            case 3: BaseData();
                break;
        }
    }
}