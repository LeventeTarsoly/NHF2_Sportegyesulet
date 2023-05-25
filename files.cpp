#include <fstream>
#include "files.h"
#include "Data/Club.h"

Club read() {

}

void Club::save() {
    //open the file for write
    std::ofstream MyFile("club.txt");

    // Write to the file
    Node* iter=head->next;
    while (iter->next != nullptr) {
        
    }
    MyFile << "Files can be tricky, but it is fun enough!";

    // Close the file
    MyFile.close();
}
