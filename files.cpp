#include <fstream>
#include <direct.h>
#include <sstream>
#include "files.h"
#include "Data/Club.h"
#include "Data/FootballTeam.h"
#include "Data/BasketballTeam.h"
#include "Data/HandballTeam.h"

Club read() {
    std::ifstream file("club.txt");
    std::string line;
    Club club;

    while (std::getline(file, line)) {
        char type;
        std::string name;
        std::string c;
        std::istringstream iss(line);
        if (!file.is_open()) {
            throw "file_open_error";
        }
        if (std::getline(iss, line, '/')) {
            type = line[0];  // Extract the type character
            std::string tr1, tr2, s;
            if (type == 'F') {
                if (std::getline(iss, name, '/') &&
                    std::getline(iss, c, '/') &&
                    std::getline(iss, tr1, '/') &&
                    std::getline(iss, tr2, '/') &&
                    std::getline(iss, s, '/')) {
                    String tr[2] = {tr1, tr2};
                    Team *temp = new FootballTeam(name, std::stoi(c), tr, s);
                    club.add(temp->clone());
                    delete temp;
                }
            }
            else if (type == 'B') {
                std::string ppc;
                std::string ppn;
                if (std::getline(iss, name, '/') &&
                    std::getline(iss, c, '/') &&
                    std::getline(iss, ppc, '/') &&
                    std::getline(iss, ppn, '/')) {
                    Team *temp = new BasketballTeam(name, std::stoi(c), std::stoi(ppc), ppn);
                    club.add(temp->clone());
                    delete temp;
                }
            }
            else if (type == 'H') {
                std::string sa, ss;
                if (std::getline(iss, name, '/') &&
                    std::getline(iss, c, '/') &&
                    std::getline(iss, sa, '/') &&
                    std::getline(iss, ss, '/')) {
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
    //open the file for write
    std::ofstream File("club.txt");
    if (!File.is_open()) {
        throw "file_open_error";
    }
    // Write to the file
    Node* iter=head->next;
    while (iter->next != nullptr) {
        iter->data->save(File);
        iter=iter->next;
    }
    // Close the file
    File.close();
}
