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
    ///�res konstruktor
    FootballTeam() : Team(String(""), 0), sponsor(String("")) {trainers[0]=""; trainers[1]="";}
    ///Param�teres konstruktor
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
    ~FootballTeam(){}
};


#endif //NHF_SPORTEGYESULET_FOOTBALLTEAM_H
