#include "BasketballTeam.h"

void BasketballTeam::print() {
    cout << "Name: " << this->getname() << endl;
    cout << "Count: " << this->getcount() << endl;
    cout << "Pompom team name: " << this->pompomName << endl;
    cout << "Pompom count: " << this->pompomCount << endl;
    cout << endl;
}
//TODO
void BasketballTeam::modify(){}
Team* BasketballTeam::clone(){
    Team *result =new BasketballTeam(*this);
    return result;
}