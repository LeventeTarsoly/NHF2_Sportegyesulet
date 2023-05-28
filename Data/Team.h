//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_TEAM_H
#define NHF_SPORTEGYESULET_TEAM_H
#include "string.h"


class Team {
    String name;
    int count;
public:
    Team(const String& n, int c) :name(String(n)), count(c) {}

    /// Kiírja egy csapat adatait
    virtual void print()=0;
    /// Módosítja egy csapat adatait
    virtual void modify()=0;
    /// Létrehoz egy Team pointert egy csapatból, ami behelyezhet? lesz a listába
    /// @return Team pointer a csapatról
    virtual Team* clone()=0;
    /// Kimenti a paraméterként kapott fileba a csapat adatait
    /// @param File
    virtual void save(std::ofstream& File)=0;
    /// Visszaadja egy csapat évi bevételét
    /// @return int bevétel
    virtual int getprice()=0;

    String getname(){
        return name;
    }

    int getcount() {
        return count;
    }

    void setname(String& n){
        this->name=n;
    }

    void setcount(int c) {
        this->count=c;
    }
    virtual ~Team() { }
};


#endif //NHF_SPORTEGYESULET_TEAM_H
