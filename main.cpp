#include "Mainmenu.h"
#include "Club.h"
#include "test.h"
#include "files.h"

using namespace std;

int main() {
      /* setlocale(LC_ALL, "");        // ez be�ll�tja az op.rendszer �ltal haszn�lt
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64)
   /// Windows alatt egy�b var�zslatra is sz�ks�g van ...
   SetConsoleCP(1250);
   SetConsoleOutputCP(1250);
#endif*/
    Club club = read();
    Mainmenu(club);
    club.save();
}

