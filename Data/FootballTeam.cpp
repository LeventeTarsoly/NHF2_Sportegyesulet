#include <limits>
#include <fstream>
#include <sstream>
#include "FootballTeam.h"

void FootballTeam::print() const{
    cout << "Name: " << this->getname() << endl;
    cout << "Count: " << this->getcount() << endl;
    cout << "Trainers: " << this->trainers[0] << " , " << this->trainers[1] << endl;
    cout << "Sponsor name: " << this->sponsor << endl;
    cout << endl;
}

void FootballTeam::modify(){
    ///Ki�rja az adatokat
    cout <<"1. "<< "Name: " << this->getname() << endl;
    cout <<"2. "<< "Count: " << this->getcount() << endl;
    cout <<"3. "<< "Trainer 1: " << this->trainers[0] << endl;
    cout <<"4. "<< "Trainer 2: " <<this->trainers[1] << endl;
    cout <<"5. "<< "Sponsor name: " << this->sponsor << endl;
    cout <<"6. "<< "Cancel"<< endl;
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
    String tr[2] {gettrainer1(), gettrainer2()};
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
        case 3: ///Edz?1
            cin >> str;
            tr[0]=str;
            settrainers(tr);
            break;
        case 4:///Edz?2
            cin >> str;
            tr[1]=str;
            settrainers(tr);
            break;
        case 5:///Szponzor
            cin >> str;
            setsponsor(str);
            break;
    }
}

int FootballTeam::getprice()const{
    ///Megnyitja a szponzor filet
    std::ifstream File("sponsors.txt");
    std::string line;
    if (!File.is_open()) {
        throw "file_open_error";
        return 0;
    }
    ////Beolvassa a fileokat am�g van
    while (std::getline(File, line)) {
        std::string  name;
        std::string  supp;
        std::istringstream iss(line);
        ///Ha megegyezik a beolvasott szponzor n�v az objektum�val visszat�r a t�mogat�ssal
        if (std::getline(iss, name, '/') && std::getline(iss, supp, '/'))
        {
            String str(name);
            if (this->getsponsor().cmp(str))
                return std::stoi(supp);
        }
    }
    File.close();
    ///Ha nem tal�l, visszat�r 0val
    return 0;
}

Team* FootballTeam::clone(){
    Team *result =new FootballTeam(*this);
    return result;
}

void FootballTeam::save(std::ofstream& File) {
    File << "F/" << getname()<<"/"<<getcount()<<"/"<<trainers[0]<<"/"<<trainers[1]<<"/"<<sponsor<<endl;
}
