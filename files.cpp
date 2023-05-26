#include <fstream>
#include <direct.h>
#include <sstream>
#include "files.h"
#include "Data/Club.h"
#include "Data/FootballTeam.h"
#include "Data/BasketballTeam.h"
#include "Data/HandballTeam.h"

/*Club read() {
    std::ifstream File("club.txt");
    std::string line;
    Club club;
    while (std::getline(File, line)) {
        std::stringstream ss(line);
        std::string token;
        std::getline(ss, token, '/');
        Team* temp;
        String n=token[1];
        int c=token[2];
        if((token[0]) == 'F')
        {
            String tr1=token[3];
            String tr2=token[4];
            String tr[2] {tr1, tr2};
            String s=token[5];
            temp = new FootballTeam(n, c, tr, s);
        }
        else if((token[0]) == 'B')
        {
            int ppc=token[3];
            String ppn=token[4];
            temp = new BasketballTeam(n, c, ppc, ppn);
        }
        else
        {
            int sa=token[3];
            int ss=token[4];
            temp = new HandballTeam(n, c, sa,ss);
        }
        club.add(temp->clone());
        delete temp;
    }
}*/

Club read() {
    std::ifstream File("club.txt");
    std::string line;
    Club club;

    while (std::getline(File, line)) {
        std::stringstream ss(line);
        std::string token;
        std::getline(ss, token, '/');
        cout << token[0]<< endl<< token[1]<< endl<< token[2]<< endl<< token[3]<< endl;
        if (!token.empty()) {
            char teamType = token[0];
            String name(token[1]);
            int code = std::stoi(token.substr(2));

            if (teamType == 'F') {
                String tr1, tr2, s;
                ss >> tr1 >> tr2 >> s;
                String tr[2] = { tr1, tr2 };
                Team* temp = new FootballTeam(name, code, tr, s);
                club.add(temp->clone());
                delete temp;
            } else if (teamType == 'B') {
                int ppc;
                String ppn;
                ss >> ppc >> ppn;

                Team* temp = new BasketballTeam(name, code, ppc, ppn);
                club.add(temp->clone());
                delete temp;
            } else if (teamType == 'H') {
                int sa, ss;
                ss >> sa >> ss;

                Team* temp = new HandballTeam(name, code, sa, ss);
                club.add(temp->clone());
                delete temp;
            }
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
