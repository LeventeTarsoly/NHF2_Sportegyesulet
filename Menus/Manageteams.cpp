#include <limits>
#include "Manageteams.h"

using namespace std;

//TODO
inline void Modifyteam(){
    std::cout <<"TODO"<< endl;
}
//TODO
inline void Deleteteam(){
    std::cout <<"TODO"<< endl;
}

void Manageteamsmenu(){
    int input=0;
    while (input!=4){
        cout << "1.Add Teams"<< endl;
        cout << "2.Modify Team"<< endl;
        cout << "3.Delete Team"<< endl;
        cout << "4.Back"<< endl;
        cin >> input;
        while(input>4 || input<1){
            cout << "Wrong input"<< endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> input;
        }
        switch (input) {
            case 1: Addmenu();
                break;
            case 2: Modifyteam();
                break;
            case 3: Deleteteam();
                break;
        }
    }
}