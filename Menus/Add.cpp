//
// Created by Admin on 2023. 05. 06..
//

#include <limits>
#include "Add.h"
#include "../Data/FootballTeam.h"
#include "../Data/BasketballTeam.h"
#include "../Data/HandballTeam.h"

using namespace std;

inline void Addfootballteam(Club& club){
    ///Név
    cout << "Name: ";
    String n;
    cin >> n;
    ///Darabszám
    int c;
    cout << "Count: ";
    while (!(cin >> c)){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    ///Edz?1
    String str;
    String temp;
    cout << "Trainer 1: ";
    cin>>str;
    cin>>temp;
    str=str+" ";
    str=str+temp;
    String str2;
    ///Edz?2
    cout << "Trainer 2: ";
    cin >> str2;
    cin>>temp;
    str2=str2+" ";
    str2=str2+temp;
    String tr[2] {str, str2};
    ///Szponzor
    cout << "Sponsor name: ";
    cin >> str;
    FootballTeam footballTeam(n, c, tr, str);
    club.add(footballTeam.clone());
}

inline void Addbasketballteam(Club& club){
    ///Név
    cout << "Name: ";
    String n;
    cin >> n;
    int c;
    ///Darabszám
    cout << "Count: ";
    while (!(cin >> c)){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int ppc;
    ///Pompom darabszám
    cout << "Pompom count: ";
    while (!(cin >> ppc)){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    String ppn;
    ///Pompom csapatnév
    cout << "Pompom team name: ";
    cin >> ppn;
    BasketballTeam basketballTeam(n,c,ppc,ppn);
    club.add(basketballTeam.clone());
}

inline void Addhandballteam(Club& club){
    ///Név
    cout << "Name: ";
    String n;
    cin >> n;
    int c;
    ///Darabszám
    cout << "Count: ";
    while (!(cin >> c)){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int sa;
    ///Támogatás értéke
    cout << "Amount of support: ";
    while (!(cin >> sa)){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int ss;
    ///Támogatás mióta
    cout << "Getting support since: ";
    while (!(cin >> ss)){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    HandballTeam handballTeam(n, c, sa,ss);
    club.add(handballTeam.clone());
}

void Addmenu(Club& club){
    int input=0;
    while (input!=4){
        cout << "1.Add Football Team"<< endl;
        cout << "2.Add Basketball Team"<< endl;
        cout << "3.Add Handball Team"<< endl;
        cout << "4.Back"<< endl;
        cin >> input;
        while(input>4 || input<1){
            cout << "Wrong input"<< endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> input;
        }
        switch (input) {
            case 1: Addfootballteam(club);
                break;
            case 2: Addbasketballteam(club);
                break;
            case 3: Addhandballteam(club);
                break;
        }
    }
}
