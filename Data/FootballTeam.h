//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_FOOTBALLTEAM_H
#define NHF_SPORTEGYESULET_FOOTBALLTEAM_H


#include "Team.h"

class FootballTeam : public Team{
    String trainers[2];
    String sponsor;
    Teamtype type = Football;
public:
    int getsupport();
};


#endif //NHF_SPORTEGYESULET_FOOTBALLTEAM_H
