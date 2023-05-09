//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_HANDBALLTEAM_H
#define NHF_SPORTEGYESULET_HANDBALLTEAM_H

#include "Team.h"

class HandballTeam : public Team{
    int supportAmount;
    int supportSince;
    Teamtype type = Handball;
};


#endif //NHF_SPORTEGYESULET_HANDBALLTEAM_H
