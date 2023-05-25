#include "FootballTeam.h"

void FootballTeam::print() {
    cout << "Name: " << this->getname() << endl;
    cout << "Count: " << this->getcount() << endl;
    cout << "Trainers: " << this->trainers[0] << " , " << this->trainers[1] << endl;
    cout << "Sponsor name: " << this->sponsor << endl;
    cout << endl;
}
//TODO
void FootballTeam::modify(){}
//TODO
int FootballTeam::getsupport(){}
Team* FootballTeam::clone(){
    Team *result =new FootballTeam(*this);
    return result;
}