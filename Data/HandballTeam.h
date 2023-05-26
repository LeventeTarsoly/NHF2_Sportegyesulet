//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_HANDBALLTEAM_H
#define NHF_SPORTEGYESULET_HANDBALLTEAM_H
#include "string.h"
#include "Team.h"

class HandballTeam : public Team{
    int supportAmount;
    int supportSince;
public:
    HandballTeam() : Team(String(""), 0), supportAmount(0), supportSince(0) {}
    HandballTeam(String n, int c, int sa, int ss) : Team(String(n), c), supportAmount(sa), supportSince(ss){}
    int setsupportAmount(int sa) {
        this->supportAmount=sa;
    }
    int setsupportSince(int ss) {
        this->supportSince=ss;
    }
    void save(std::ofstream& File);
    void print();
    void modify();
    Team* clone();
};


#endif //NHF_SPORTEGYESULET_HANDBALLTEAM_H
