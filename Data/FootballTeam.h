//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_FOOTBALLTEAM_H
#define NHF_SPORTEGYESULET_FOOTBALLTEAM_H

#include "string.h"
#include "Team.h"
using namespace std;

class FootballTeam : public Team{
    String trainers[2];
    String sponsor;
public:
    ///Üres konstruktor
    FootballTeam() : Team(String(""), 0), sponsor(String("")) {trainers[0]=""; trainers[1]="";}
    ///Paraméteres konstruktor
    FootballTeam(String n, int c, String t[2], const String& s) : Team(String(n), c), sponsor(String(s)) {trainers[0]=String(t[0]); trainers[1]=String(t[1]);}
    ///Edz?k settere
    void settrainers(String t[2]){
        trainers[0]=t[0];
        trainers[1]=t[1];
    }
    ///Edz?1 gettere
    String gettrainer1()const{
        return trainers[0];
    }
    ///Edz?2 gettere
    String gettrainer2()const{
        return trainers[1];
    }
    ///Szponzor gettere
    String getsponsor()const{
        return sponsor;
    }
    ///Szponzor settere
    void setsponsor(String& s){
        this->sponsor=s;
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
    ~FootballTeam(){}
};


#endif //NHF_SPORTEGYESULET_FOOTBALLTEAM_H
