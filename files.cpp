#include <fstream>
#include "files.h"
#include "Data/Club.h"

Club read() {

}

void Club::save() {
    //open the file for write
    std::ofstream File("club.txt");

    // Write to the file
    Node* iter=head->next;
    while (iter->next != nullptr) {
        
    }
    File << "";
    // Close the file
    File.close();
}
