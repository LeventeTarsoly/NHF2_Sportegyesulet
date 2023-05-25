#include <iostream>
#include "Menus/Main.h"
#include "Data/FootballTeam.h"
#include "Data/BasketballTeam.h"
#include "Data/HandballTeam.h"
#include "Data/Club.h"
#include "string.h"
#include <locale>
#include "windows.h"
#include "test.h"
#include "files.h"

using namespace std;

int main() {
       setlocale(LC_ALL, "");        // ez be�ll�tja az op.rendszer �ltal haszn�lt
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64)
   /// Windows alatt egy�b var�zslatra is sz�ks�g van ...
   SetConsoleCP(1250);
   SetConsoleOutputCP(1250);
#endif
    //read();
    Club club;
    Mainmenu(club);
    club.save();
}