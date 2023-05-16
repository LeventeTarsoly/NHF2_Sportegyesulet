//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_TEAM_H
#define NHF_SPORTEGYESULET_TEAM_H
#include <string>
#include "string.h"


class Team {
    String name;
    int count;
public:
    Team(const String& n, int c) :name(String(n)), count(c) {}
    virtual void print()=0;
    virtual void modify()=0;
    virtual Team* clone()=0;
    String getname(){
        return name;
    }
    int getcount() {
        return count;
    }
    bool cmp();
};


#endif //NHF_SPORTEGYESULET_TEAM_H
