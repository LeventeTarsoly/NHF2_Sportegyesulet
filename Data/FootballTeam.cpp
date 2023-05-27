#include <limits>
#include <fstream>
#include "FootballTeam.h"

void FootballTeam::print() {
    cout << "Name: " << this->getname() << endl;
    cout << "Count: " << this->getcount() << endl;
    cout << "Trainers: " << this->trainers[0] << " , " << this->trainers[1] << endl;
    cout << "Sponsor name: " << this->sponsor << endl;
    cout << endl;
}

void FootballTeam::modify(){
    cout <<"1. "<< "Name: " << this->getname() << endl;
    cout <<"2. "<< "Count: " << this->getcount() << endl;
    cout <<"3. "<< "Trainer 1: " << this->trainers[0] << endl;
    cout <<"4. "<< "Trainer 2: " <<this->trainers[1] << endl;
    cout <<"5. "<< "Sponsor name: " << this->sponsor << endl;
    cout <<"6. "<< "Cancel"<< endl;
    cout << endl;
    int input = 0;
    cin >> input;
    while(input>6 || input<1){
        cout << "Wrong input"<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> input;
    }
    String str;
    String tr[2] {gettrainer1(), gettrainer2()};
    int i;
    switch (input) {
        case 1:
            cin >> str;
            setname(str);
            break;
        case 2:
            cin >> i;
            while (!(cin >> i)){
                cout << "Wrong input"<< endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            setcount(i);
            break;
        case 3:
            cin >> str;
            tr[0]=str;
            settrainers(tr);
            break;
        case 4:
            cin >> str;
            tr[1]=str;
            settrainers(tr);
            break;
        case 5:
            cin >> str;
            setsponsor(str);
            break;
    }
}

int FootballTeam::getprice(){
    std::ifstream File("sponsors.txt");
    std::string line;
    while (std::getline(File, line)) {
        char name[50];
        int supp;
        std::sscanf(line.c_str(), "%s /%i", name, &supp);
        String str(name);
        if(this->getname().cmp(str))
            return supp;
    }
    return 0;
}

Team* FootballTeam::clone(){
    Team *result =new FootballTeam(*this);
    return result;
}

void FootballTeam::save(std::ofstream& File) {
    File << "F/" << getname()<<" /"<<getcount()<<"/"<<trainers[0]<<" /"<<trainers[1]<<" /"<<sponsor<<endl;
}
