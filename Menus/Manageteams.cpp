#include <limits>
#include "Manageteams.h"

using namespace std;

inline void Modifyteam(Club& club){
    Node* iter = club.gethead()->next;
    int cnt = 1;
    while (iter->next != nullptr) {
        std::cout << cnt << ". " << iter->data->getname() << std::endl;
        cnt++;
        iter=iter->next;
    }
    std::cout << cnt << ". Cancel" << std::endl;
    int input=0;
    cin >> input;
    while(input>cnt || input<1){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> input;
    }
    if(input==cnt)
        return;
    iter = club.gethead()->next;
    for (int i = 1; i < input; ++i) {
        iter=iter->next;
    }
    iter->data->modify();
}

inline void Deleteteam(Club& club){
    Node* iter = club.gethead()->next;
    int cnt = 1;
    while (iter->next != nullptr) {
        std::cout << cnt << ". " << iter->data->getname() << std::endl;
        cnt++;
        iter=iter->next;
    }
    std::cout << cnt << ". Cancel" << std::endl;
    int input=0;
    cin >> input;
    while(input>cnt || input<1){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> input;
    }
    if(input==cnt)
        return;
    iter = club.gethead()->next;
    for (int i = 1; i < input; ++i) {
        iter=iter->next;
    }
    club.pop(iter);
}

void Manageteamsmenu(Club& club){
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
            case 1: Addmenu(club);
                break;
            case 2: Modifyteam(club);
                break;
            case 3: Deleteteam(club);
                break;
        }
    }
}