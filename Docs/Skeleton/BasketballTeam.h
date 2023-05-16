//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_BASKETBALLTEAM_H
#define NHF_SPORTEGYESULET_BASKETBALLTEAM_H
#include "string.h"
#include "Team.h"
using namespace std;

class BasketballTeam : public Team{
    int pompomCount;
    String pompomName;
public:
    BasketballTeam() : Team(String(""), 0), pompomCount(0), pompomName(String("")) {}
    BasketballTeam(String n, int c, int pc, const String& pn) : Team(String(n), c), pompomCount(pc), pompomName(String(pn)) {}
    void print();
    void modify();
    Team* clone();
};


#endif //NHF_SPORTEGYESULET_BASKETBALLTEAM_H
