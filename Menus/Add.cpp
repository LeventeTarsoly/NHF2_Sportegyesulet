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
    ///N�v
    cout << "Name: ";
    String n;
    cin >> n;
    ///Hibakezel�s - ha t�bbet �rna, mint egy sz�, kit�rli
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    ///Darabsz�m
    int c;
    cout << "Count: ";
    ///intes hibakeze�ls
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
    ///Hibakezel�s - ha t�bbet �rna, mint egy sz�, kit�rli
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    str=str+" ";
    str=str+temp;
    String str2;
    ///Edz?2
    cout << "Trainer 2: ";
    cin >> str2;
    cin>>temp;
    ///Hibakezel�s - ha t�bbet �rna, mint egy sz�, kit�rli
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    str2=str2+" ";
    str2=str2+temp;
    String tr[2] {str, str2};
    ///Szponzor
    cout << "Sponsor name: ";
    cin >> str;
    ///Hibakezel�s - ha t�bbet �rna, mint egy sz�, kit�rli
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    FootballTeam footballTeam(n, c, tr, str);
    club.add(footballTeam.clone());
}

inline void Addbasketballteam(Club& club){
    ///N�v
    cout << "Name: ";
    String n;
    cin >> n;
    ///Hibakezel�s - ha t�bbet �rna, mint egy sz�, kit�rli
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int c;
    ///Darabsz�m
    cout << "Count: ";
    ///intes hibakeze�ls
    while (!(cin >> c)){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int ppc;
    ///Pompom darabsz�m
    cout << "Pompom count: ";
    ///intes hibakeze�ls
    while (!(cin >> ppc)){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    String ppn;
    ///Pompom csapatn�v
    cout << "Pompom team name: ";
    cin >> ppn;
    ///Hibakezel�s - ha t�bbet �rna, mint egy sz�, kit�rli
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    BasketballTeam basketballTeam(n,c,ppc,ppn);
    club.add(basketballTeam.clone());
}

inline void Addhandballteam(Club& club){
    ///N�v
    cout << "Name: ";
    String n;
    cin >> n;
    ///Hibakezel�s - ha t�bbet �rna, mint egy sz�, kit�rli
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int c;
    ///Darabsz�m
    cout << "Count: ";
    ///intes hibakezel�s
    while (!(cin >> c)){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int sa;
    ///T�mogat�s �rt�ke
    cout << "Amount of support: ";
    ///intes hibakezel�s
    while (!(cin >> sa)){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int ss;
    ///T�mogat�s mi�ta
    cout << "Getting support since: ";
    ///intes hibakezel�s
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
        ///intes hibakezel�s
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
