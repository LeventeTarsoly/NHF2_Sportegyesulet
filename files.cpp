#include <fstream>
#include <direct.h>
#include <sstream>
#include "files.h"
#include "Data/Club.h"
#include "Data/FootballTeam.h"
#include "Data/BasketballTeam.h"
#include "Data/HandballTeam.h"

Club read() {
    std::ifstream File("club.txt");
    std::string line;
    Club club;
    while (std::getline(File, line)) {
        char type;
        char name[50];
        int c;
        std::sscanf(line.c_str(), "%c/", &type);
            if (type == 'F') {
                char tr1[50], tr2[50], s[30];
                std::sscanf(line.c_str(), "%c/%s /%i/%s /%s /%s", &type, &name, &c, &tr1, &tr2, &s);
                String tr[2] = { tr1, tr2 };
                Team* temp = new FootballTeam(name, 1, tr, s); //count
                club.add(temp->clone());
                delete temp;
            }
            else if (type == 'B') {
                int ppc;
                char ppn[30];
                std::sscanf(line.c_str(), "%c/%s /%i/%s /%i", &type, &name, &c, &ppn, &ppc);
                Team* temp = new BasketballTeam(name, 1, ppc, ppn);
                club.add(temp->clone());
                delete temp;
            }
            else if (type == 'H') {
                int sa, ss;
                std::sscanf(line.c_str(), "%c/%s /%i/%i/%i", &type, &name, &c, &sa, &ss);
                Team* temp = new HandballTeam(name, 1, sa, ss);
                club.add(temp->clone());
                delete temp;
            }
        }
    return club;
}



void Club::save() {
    //open the file for write
    std::ofstream File("club.txt");

    // Write to the file
    Node* iter=head->next;
    while (iter->next != nullptr) {
        iter->data->save(File);
        iter=iter->next;
    }
    // Close the file
    File.close();
}
