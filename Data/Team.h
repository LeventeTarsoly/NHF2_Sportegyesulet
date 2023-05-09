//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_TEAM_H
#define NHF_SPORTEGYESULET_TEAM_H
#include <string>
#include "string.h"
#include "Type.h"


class Team {
    String name;
    int count;
    Teamtype type;
public:
    virtual void print()=0;
    virtual void modify()=0;
    bool cmp();
};


#endif //NHF_SPORTEGYESULET_TEAM_H
