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
    ///�res konstruktor
    BasketballTeam() : Team(String(""), 0), pompomCount(0), pompomName(String("")) {}
    ///Param�teres konstruktor
    BasketballTeam(String n, int c, int pc, const String& pn) : Team(String(n), c), pompomCount(pc), pompomName(String(pn)) {}
    ///Pompom l�tsz�m settere
    void setpompomCount(int c){
        pompomCount=c;
    }
    ///Pompom n�v settere
    void setpompomName(String& n){
        this->pompomName=n;
    }
    ///Pompom l�tsz�m gettere
    int getpompomCount()const{
        return pompomCount;
    }
    ///Pompom n�v gettere
    String getpompomName()const{
        return pompomName;
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
    ~BasketballTeam(){}
};


#endif //NHF_SPORTEGYESULET_BASKETBALLTEAM_H
