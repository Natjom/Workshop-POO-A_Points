#include "piano.h"
#include "saxophone.h"
#include <iostream>

int main() {
    std::string choix;
    std::cout << "Quel instrument voulez-vous jouer (saxophone/piano)? ";
    std::cin >> choix;

    if (choix == "saxophone") {
        Saxophone sax;
        sax.jouer();
    } else if (choix == "piano") {
        Piano piano;
        piano.jouer();
    } else {
        std::cout << "Instrument non reconnu!" << std::endl;
    }

    return 0;
}
