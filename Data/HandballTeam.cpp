#include "HandballTeam.h"

void HandballTeam::print() {
    using namespace std;{
        cout << "Name: " << this->getname() << endl;
        cout << "Count: " << this->getcount() << endl;
        cout << "Amount of support: " << this->supportAmount << endl;
        cout << "Getting support since: " << this->supportSince << endl;
        cout << endl;
    }

}
//TODO
void HandballTeam::modify(){}
Team* HandballTeam::clone(){
    Team *result =new HandballTeam(*this);
    return result;
}