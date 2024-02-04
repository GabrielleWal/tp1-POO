#include <iostream>
#include <vector>
#include <string>
#include "Vol.hpp"

int Vol::nombre_vols_crees = 0;

int main() {
    Vol vol1(1, 10); 
    Vol vol2(2, 30);

    for (int i = 1; i <= 10; ++i) {
        std::string nom = "Passager" + std::to_string(i);
        int id = 1000 + i;
        std::string siege = "A" + std::to_string(i);
        double prix = 200.0;
        Passager* passager =  new Passager(nom, id, siege, prix); 
        vol1.ajouter_passager(passager); 
    }
    Passager* passager =  new Passager("jane", 1200, "B1", 250); 
   
    vol1.ajouter_passager(passager);
    

    return 0;
}
