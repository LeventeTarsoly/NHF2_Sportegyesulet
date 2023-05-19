//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_FOOTBALLTEAM_H
#define NHF_SPORTEGYESULET_FOOTBALLTEAM_H

#include "string.h"
#include "Team.h"
using namespace std;

class FootballTeam : public Team{
    String trainers[2];
    String sponsor;
public:
    FootballTeam() : Team(String(""), 0), sponsor(String("")) {trainers[0]=""; trainers[1]="";}
    FootballTeam(String n, int c, String t[2], const String& s) : Team(String(n), c), sponsor(String(s)) {trainers[0]=String(t[0]); trainers[1]=String(t[1]);}
    void settrainers(String t[2]){
        trainers[0]=t[0];
        trainers[1]=t[1];
    }
    void setsponsor(String& s){
        this->sponsor=s;
    }
    void print();
    void modify();
    int getsupport();
    Team* clone();

};


#endif //NHF_SPORTEGYESULET_FOOTBALLTEAM_H
