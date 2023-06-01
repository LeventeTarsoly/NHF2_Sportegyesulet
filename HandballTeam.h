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
    ///Üres konstruktor
    HandballTeam() : Team(String(""), 0), supportAmount(0), supportSince(0) {}
    ///Paraméteres konstruktor
    HandballTeam(String n, int c, int sa, int ss) : Team(String(n), c), supportAmount(sa), supportSince(ss){}
    ///Támogatás összeg settere
    void setsupportAmount(int sa) {
        this->supportAmount=sa;
    }
    ///Támogatás ideje settere
    void setsupportSince(int ss) {
        this->supportSince=ss;
    }
    ///Támogatás összeg gettere
    int getsupportAmount()const{
        return supportAmount;
    }
    ///Támogatás ideje settere
    int getsupportSince()const{
        return supportSince;
    }
    /// Kimenti a paraméterként kapott fileba a csapat adatait
    /// @param File
    void save(std::ofstream& File);
    /// Kiírja egy csapat adatait
    void print()const;
    /// Módosítja egy csapat adatait
    void modify();
    /// Visszaadja egy csapat évi bevételét
    /// @return int bevétel
    int getprice()const;
    /// Létrehoz egy Team pointert egy csapatból, ami behelyezhet? lesz a listába
    /// @return Team pointer a csapatról
    Team* clone();
    ///Destruktor
    ~HandballTeam(){}
};


#endif //NHF_SPORTEGYESULET_HANDBALLTEAM_H
