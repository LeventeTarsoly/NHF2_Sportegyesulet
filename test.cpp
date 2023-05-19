#include "Data/FootballTeam.h"
#include "Data/BasketballTeam.h"
#include "Data/HandballTeam.h"
#include "Data/Teams.h"

bool classtest(){
    FootballTeam footballTeam1;
    String trainers[2];
    trainers[0] = "Béla";
    trainers[1] = "Józsi";
    FootballTeam footballTeam2("f", 20, trainers, "Nike");
    BasketballTeam basketballTeam1;
    BasketballTeam basketballTeam2("b", 20, 10, "pp");
    HandballTeam handballTeam1;
    HandballTeam handballTeam2("h", 20, 200, 2010);
    Club club;
    footballTeam1.print();
    club.add(footballTeam1.clone());
    cout << endl;
    footballTeam2.print();
    club.add(footballTeam2.clone());
    cout << endl;
    basketballTeam1.print();
    club.add(basketballTeam1.clone());
    cout << endl;
    basketballTeam2.print();
    club.add(basketballTeam2.clone());
    cout << endl;
    handballTeam1.print();
    club.add(handballTeam1.clone());
    cout << endl;
    handballTeam2.print();
    club.add(handballTeam2.clone());
    cout << endl;
    return true;
}