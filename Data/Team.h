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
    ///Konstruktor
    Team(const String& n, int c) :name(String(n)), count(c) {}

    /// Kiírja egy csapat adatait
    virtual void print()const=0;
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
    virtual int getprice()const=0;
    ///Név gettere
    String getname()const{
        return name;
    }
    ///Darabszám gettere
    int getcount() const{
        return count;
    }
    ///Név settere
    void setname(const String& n){
        this->name=n;
    }
    ///Darabszám settere
    void setcount(const int c) {
        this->count=c;
    }
    ///Destruktor
    virtual ~Team() { }
};


#endif //NHF_SPORTEGYESULET_TEAM_H
