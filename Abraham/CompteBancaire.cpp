#include "CompteBancaire.h"

void CompteBancaire::creerCompte(const std::string& proprietaire, double solde_initial) {
    static int numeroCompteGlobal = 1; // Utilisation d'un numéro de compte global
    comptes.push_back({numeroCompteGlobal++, proprietaire, solde_initial});
    std::cout << "Compte créé avec succès." << std::endl;
}

bool CompteBancaire::deposerArgent(int numeroCompte, double montant) {
    for (auto& compte : comptes) {
        if (compte.numeroCompte == numeroCompte) {
            compte.solde += montant;
            std::cout << "Dépôt effectué avec succès." << std::endl;
            return true;
        }
    }

    std::cout << "Compte non trouvé." << std::endl;
    return false;
}

bool CompteBancaire::retirerArgent(int numeroCompte, double montant) {
    for (auto& compte : comptes) {
        if (compte.numeroCompte == numeroCompte) {
            if (montant <= compte.solde) {
                compte.solde -= montant;
                std::cout << "Retrait effectué avec succès." << std::endl;
                return true;
            } else {
                std::cout << "Solde insuffisant." << std::endl;
                return false;
            }
        }
    }

    std::cout << "Compte non trouvé." << std::endl;
    return false;
}

double CompteBancaire::consulterSolde(int numeroCompte) const {
    for (const auto& compte : comptes) {
        if (compte.numeroCompte == numeroCompte) {
            return compte.solde;
        }
    }

    std::cout << "Compte non trouvé." << std::endl;
    return -1.0; // Valeur spéciale pour indiquer une erreur
}

void CompteBancaire::afficherComptes() const {
    std::cout << "Liste des comptes :" << std::endl;
    for (const auto& compte : comptes) {
        std::cout << "Compte " << compte.numeroCompte << " - Propriétaire : " << compte.proprietaire
                  << " - Solde : " << compte.solde << std::endl;
    }
}
