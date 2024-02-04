#include "Vol.hpp"

Vol::Vol(int n, int c) {
    numero_vol = n;
    capacite = c;
    nombre_vols_crees++;
    std::cout  << "vol "<< numero_vol << " crée" << "capacité maximale : " << capacite << std::endl;
};

Vol::~Vol() {
    std::cout  << numero_vol << "supprimé" << std::endl;
};

void Vol::afficher_billets() {
    for (Passager* passager : passagers) {
        passager->afficher_informations();
    }
};

void Vol::ajouter_passager(Passager* passager) {
    if (passagers.size() < capacite) {
        passagers.push_back(passager);
    } else {
        std::cout << "Impossible, le vol est complet." << std::endl;
    }
};

void Vol::annuler_billet(Passager* passager) {
    for (size_t i = 0; i < passagers.size(); ++i) {
        if (passagers[i] == passager) {
            passagers.erase(passagers.begin() + i);
            std::cout << "Billet annulé :" << passager << std::endl;
            return; 
        } else {
            std::cout << "Passager introuvable." << passager << std::endl;
        }
    }
};

int Vol::nombre_passagers() {
    return passagers.size();
};

void Vol::fixer_numero_vol(int nouveau_numero_vol) {
    numero_vol = nouveau_numero_vol;
    std::cout << "Numéro de vol changé par :" << numero_vol << std::endl;
};

int Vol::lire_numero_vol() {
    return numero_vol;
};

int Vol::get_nombre_vols_crees() {
    return nombre_vols_crees;
};