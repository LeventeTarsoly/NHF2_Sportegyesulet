//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_GROUPS_H
#define NHF_SPORTEGYESULET_GROUPS_H

#include <vector>
#include "Group.h"

class Club {
    std::vector<Group*> groups;
public:
    void add(Group* g);
};


#endif //NHF_SPORTEGYESULET_GROUPS_H
