//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_BASKETBALLTEAM_H
#define NHF_SPORTEGYESULET_BASKETBALLTEAM_H
#include "string.h"
#include "Team.h"
using namespace std;

class BasketballTeam : public Team{
    int pompomCount;
    String pompomName;
public:
    ///Üres konstruktor
    BasketballTeam() : Team(String(""), 0), pompomCount(0), pompomName(String("")) {}
    ///Paraméteres konstruktor
    BasketballTeam(String n, int c, int pc, const String& pn) : Team(String(n), c), pompomCount(pc), pompomName(String(pn)) {}
    ///Pompom létszám settere
    void setpompomCount(int c){
        pompomCount=c;
    }
    ///Pompom név settere
    void setpompomName(String& n){
        this->pompomName=n;
    }
    ///Pompom létszám gettere
    int getpompomCount()const{
        return pompomCount;
    }
    ///Pompom név gettere
    String getpompomName()const{
        return pompomName;
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
    ~BasketballTeam(){}
};


#endif //NHF_SPORTEGYESULET_BASKETBALLTEAM_H
