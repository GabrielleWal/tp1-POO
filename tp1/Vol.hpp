#ifndef VOL_HPP
#define VOL_HPP

#include <iostream>
#include <vector>
#include "Passager.hpp"

class Vol {
    private:
        int numero_vol;
        int capacite;
        std::vector<Passager*> passagers;
        static int nombre_vols_crees;
    public:
        Vol(int numero_vol, int capacite);
        ~Vol();
        void afficher_billets();
        void ajouter_passager(Passager* passager);
        void annuler_billet(Passager* passager);
        int nombre_passagers();
        void fixer_numero_vol(int numero_vol);
        int lire_numero_vol();
        static int get_nombre_vols_crees();
};

#endif // VOL_HPP