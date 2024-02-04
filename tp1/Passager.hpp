#ifndef PASSAGER_HPP
#define PASSAGER_HPP

#include <string>

class Passager {
private:
    std::string nom;
    std::string siege;
    int id;
    double prix;
public:
    Passager(std::string n, int i, std::string s, double prix);
    ~Passager();
    void afficher_informations();
};
#endif // PASSAGER_HPP
