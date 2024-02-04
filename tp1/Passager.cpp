#include <iostream>
#include <string>
#include "Passager.hpp"

Passager::Passager(std::string n, int i, std::string s, double p) {
    nom = n;
    id = i;
    siege = s;
    prix = p;
};

Passager::~Passager() {
    std::cout  << nom << "supprimé" << std::endl;
};

void Passager::afficher_informations() {
    std::cout << "Nom: " << nom << " Numéro de passeport: " << id << " Siège: " << siege << " Prix du siège: " << prix << std::endl;
};
