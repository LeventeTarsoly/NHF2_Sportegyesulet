#include <limits>
#include "BasketballTeam.h"
#include <fstream>

void BasketballTeam::print() const{
    cout << "Name: " << this->getname() << endl;
    cout << "Count: " << this->getcount() << endl;
    cout << "Pompom team name: " << this->pompomName << endl;
    cout << "Pompom count: " << this->pompomCount << endl;
    cout << endl;
}

void BasketballTeam::modify(){
    ///Ki�rja az adatokat
    cout <<"1. "<< "Name: " << this->getname() << endl;
    cout <<"2. "<< "Count: " << this->getcount() << endl;
    cout <<"3. "<< "Pompom team name: " << this->pompomName << endl;
    cout <<"4. " << "Pompom count: " << this->pompomCount << endl;
    cout <<"5. "<< "Cancel"<< endl;
    cout << endl;
    ///Beveszi az inputot, hogy melyik adatot m�dositsa
    int input = 0;
    cin >> input;
    ///Hibakezel�s
    while(input>6 || input<1){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> input;
    }
    String str;
    int i;
    ///Inputt�l f�gg?en m�dos�t
    switch (input) {
        case 1:///N�v
            cin >> str;
            setname(str);
            break;
        case 2:///Darabsz�m
            cin >> i;
            while (!(cin >> i)){
                cout << "Wrong input"<< endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            setcount(i);
            break;
        case 3:///Pompom n�v
            cin >> str;
            setpompomName(str);
            break;
        case 4:///Pompom darabsz�m
            cin >> i;
            while (!(cin >> i)){
                cout << "Wrong input"<< endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            setpompomCount(i);
            break;
    }
}
Team* BasketballTeam::clone(){
    Team *result =new BasketballTeam(*this);
    return result;
}

void BasketballTeam::save(std::ofstream& File) {
    File << "B/" << getname()<<"/"<<getcount()<<"/"<<pompomCount<<"/"<<pompomName<<endl;
}

int BasketballTeam::getprice() const{
    return 0;
}
