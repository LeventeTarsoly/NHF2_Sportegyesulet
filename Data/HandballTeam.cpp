#include <limits>
#include <fstream>
#include "HandballTeam.h"
using namespace std;
void HandballTeam::print() const{
        cout << "Name: " << this->getname() << endl;
        cout << "Count: " << this->getcount() << endl;
        cout << "Amount of support: " << this->supportAmount << endl;
        cout << "Getting support since: " << this->supportSince << endl;
        cout << endl;
}

void HandballTeam::modify(){
    ///Kiírja az adatokat
    cout <<"1. "<< "Name: " << this->getname() << endl;
    cout <<"2. "<< "Count: " << this->getcount() << endl;
    cout <<"3. "<< "Amount of support: " << this->supportAmount << endl;
    cout <<"4. " << "Getting support since: " << this->supportSince << endl;
    cout <<"5. "<< "Cancel"<< endl;
    cout << endl;
    ///Beveszi az inputot, hogy melyik adatot módositsa
    int input = 0;
    cin >> input;
    ///Hibakezelés
    while(input>6 || input<1){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> input;
    }
    String str;
    int i;
    ///Inputtól függ?en módosít
    switch (input) {
        case 1: ///Név
            cin >> str;
            setname(str);
            break;
        case 2: ///Darabszám
            cin >> i;
            while (!(cin >> i)){
                cout << "Wrong input"<< endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            setcount(i);
            break;
        case 3: ///Támogatás összege
            cin >> i;
            while (!(cin >> i)){
                cout << "Wrong input"<< endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            setsupportAmount(i);
            break;
        case 4: ///Támogatás ideje
            cin >> i;
            while (!(cin >> i)){
                cout << "Wrong input"<< endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            setsupportSince(i);
            break;
    }
}
Team* HandballTeam::clone(){
    Team *result =new HandballTeam(*this);
    return result;
}

void HandballTeam::save(std::ofstream& File) {
    File << "H/" << getname()<<"/"<<getcount()<<"/"<<supportAmount<<"/"<<supportSince<<endl;
}

int HandballTeam::getprice() const{
    return supportAmount;
}