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
    ///�res konstruktor
    HandballTeam() : Team(String(""), 0), supportAmount(0), supportSince(0) {}
    ///Param�teres konstruktor
    HandballTeam(String n, int c, int sa, int ss) : Team(String(n), c), supportAmount(sa), supportSince(ss){}
    ///T�mogat�s �sszeg settere
    void setsupportAmount(int sa) {
        this->supportAmount=sa;
    }
    ///T�mogat�s ideje settere
    void setsupportSince(int ss) {
        this->supportSince=ss;
    }
    ///T�mogat�s �sszeg gettere
    int getsupportAmount()const{
        return supportAmount;
    }
    ///T�mogat�s ideje settere
    int getsupportSince()const{
        return supportSince;
    }
    /// Kimenti a param�terk�nt kapott fileba a csapat adatait
    /// @param File
    void save(std::ofstream& File);
    /// Ki�rja egy csapat adatait
    void print()const;
    /// M�dos�tja egy csapat adatait
    void modify();
    /// Visszaadja egy csapat �vi bev�tel�t
    /// @return int bev�tel
    int getprice()const;
    /// L�trehoz egy Team pointert egy csapatb�l, ami behelyezhet? lesz a list�ba
    /// @return Team pointer a csapatr�l
    Team* clone();
    ///Destruktor
    ~HandballTeam(){}
};


#endif //NHF_SPORTEGYESULET_HANDBALLTEAM_H
