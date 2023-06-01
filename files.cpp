#include <fstream>
#include <sstream>
#include "files.h"
#include "Club.h"
#include "FootballTeam.h"
#include "BasketballTeam.h"
#include "HandballTeam.h"

Club read() {
    ///megnyitja a filet
    std::ifstream file("club.txt");
    std::string line;
    Club club;
    ///olvas, am�g van sor
    while (std::getline(file, line)) {
        char type;
        std::string name;
        std::string c;
        ///streamre kell alak�tani, hogy beolvashat� legyen sz�tv�lasztva
        std::istringstream iss(line);
        if (!file.is_open()) {
            throw "file_open_error";
        }
        ///beolvassa az els? karaktert - t�pust
        if (std::getline(iss, line, '/')) {
            type = line[0];
            ///ha focicsapat
            if (type == 'F') {
                std::string tr1, tr2, s;
                ///teljes sor beolvas�sa
                if (std::getline(iss, name, '/') &&
                    std::getline(iss, c, '/') &&
                    std::getline(iss, tr1, '/') &&
                    std::getline(iss, tr2, '/') &&
                    std::getline(iss, s, '/')) {
                    ///csapat l�trehoz�sa
                    String tr[2] = {tr1, tr2};
                    Team *temp = new FootballTeam(name, std::stoi(c), tr, s);
                    club.add(temp->clone());
                    delete temp;
                }
            }
            ///ha kos�rcsapat
            else if (type == 'B') {
                std::string ppc;
                std::string ppn;
                ///teljes sor beolvas�sa
                if (std::getline(iss, name, '/') &&
                    std::getline(iss, c, '/') &&
                    std::getline(iss, ppc, '/') &&
                    std::getline(iss, ppn, '/')) {
                    ///csapat l�trehoz�sa
                    Team *temp = new BasketballTeam(name, std::stoi(c), std::stoi(ppc), ppn);
                    club.add(temp->clone());
                    delete temp;
                }
            }
                ///ha k�zicsapat
            else if (type == 'H') {
                std::string sa, ss;
                ///teljes sor beolvas�sa
                if (std::getline(iss, name, '/') &&
                    std::getline(iss, c, '/') &&
                    std::getline(iss, sa, '/') &&
                    std::getline(iss, ss, '/')) {
                    ///csapat l�trehoz�sa
                    Team *temp = new HandballTeam(name, std::stoi(c), std::stoi(sa), std::stoi(ss));
                    club.add(temp->clone());
                    delete temp;
                }
            }
        }
    }
    file.close();
    return club;
}



void Club::save() {
    ///megnyitja a filet
    std::ofstream File("club.txt");
    if (!File.is_open()) {
        throw "file_open_error";
    }
    ///v�gigmegy a list�n
    Node* iter=head->next;
    while (iter->next != nullptr) {
        ////minden elemet lement
        iter->data->save(File);
        iter=iter->next;
    }
    File.close();
}
