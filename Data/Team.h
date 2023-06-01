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

    /// Ki�rja egy csapat adatait
    virtual void print()const=0;
    /// M�dos�tja egy csapat adatait
    virtual void modify()=0;
    /// L�trehoz egy Team pointert egy csapatb�l, ami behelyezhet? lesz a list�ba
    /// @return Team pointer a csapatr�l
    virtual Team* clone()=0;
    /// Kimenti a param�terk�nt kapott fileba a csapat adatait
    /// @param File
    virtual void save(std::ofstream& File)=0;
    /// Visszaadja egy csapat �vi bev�tel�t
    /// @return int bev�tel
    virtual int getprice()const=0;
    ///N�v gettere
    String getname()const{
        return name;
    }
    ///Darabsz�m gettere
    int getcount() const{
        return count;
    }
    ///N�v settere
    void setname(const String& n){
        this->name=n;
    }
    ///Darabsz�m settere
    void setcount(const int c) {
        this->count=c;
    }
    ///Destruktor
    virtual ~Team() { }
};


#endif //NHF_SPORTEGYESULET_TEAM_H
