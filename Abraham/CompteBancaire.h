#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

#include <vector>
#include <iostream>

class CompteBancaire {
private:
    struct Compte {
        int numeroCompte;
        std::string proprietaire;
        double solde;
    };

    std::vector<Compte> comptes;

public:
    void creerCompte(const std::string& proprietaire, double solde_initial);
    bool deposerArgent(int numeroCompte, double montant);
    bool retirerArgent(int numeroCompte, double montant);
    double consulterSolde(int numeroCompte) const;
    void afficherComptes() const;
};

#endif
