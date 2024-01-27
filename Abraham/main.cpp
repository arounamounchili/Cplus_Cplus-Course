#include <iostream>
#include <string>
#include <vector>
#include "CompteBancaire.h"
using namespace std;

/* Projet 02 -Gestionnaire de compte bancaire

Créez un système de gestion de comptes bancaires où chaque compte est représenté par une
classe. Les utilisateurs peuvent créer des comptes, effectuer des dépôts et des retraits, et
consulter leur solde.

*/

int main()
{
    // Création d'un objet CompteBancaire
    CompteBancaire gestionnaireComptes;

    int choix = 0;

    while (choix != 6)
    {
        // Affichage du menu
        cout << "Menu :" << endl;
        cout << "1. Créer un nouveau compte" << endl;
        cout << "2. Déposer de l'argent" << endl;
        cout << "3. Retirer de l'argent" << endl;
        cout << "4. Consulter le solde" << endl;
        cout << "5. Afficher tous les comptes" << endl;
        cout << "6. Quitter" << endl;

        // Demande à l'utilisateur de faire un choix
        cout << "Entrez votre choix : ";
        cin >> choix;

        // Traitement du choix de l'utilisateur
        switch (choix)
        {
        case 1:
        {
            // Création d'un nouveau compte
            string proprietaire;
            double solde_initial;
            cout << "Entrez le nom du propriétaire : ";
            cin.ignore(); // Pour éviter les problèmes avec getline après cin >>
            getline(cin, proprietaire);
            cout << "Entrez le solde initial : ";
            cin >> solde_initial;
            gestionnaireComptes.creerCompte(proprietaire, solde_initial);
            break;
        }
        case 2:
        {
            // Dépôt d'argent dans un compte existant
            int numeroCompte;
            double montant;
            cout << "Entrez le numéro du compte : ";
            cin >> numeroCompte;
            cout << "Entrez le montant à déposer : ";
            cin >> montant;
            gestionnaireComptes.deposerArgent(numeroCompte, montant);
            break;
        }
        case 3:
        {
            // Retrait d'argent d'un compte existant
            int numeroCompte;
            double montant;
            cout << "Entrez le numéro du compte : ";
            cin >> numeroCompte;
            cout << "Entrez le montant à retirer : ";
            cin >> montant;
            gestionnaireComptes.retirerArgent(numeroCompte, montant);
            break;
        }
        case 4:
        {
            // Consultation du solde d'un compte
            int numeroCompte;
            cout << "Entrez le numéro du compte : ";
            cin >> numeroCompte;
            double solde = gestionnaireComptes.consulterSolde(numeroCompte);
            if (solde != -1.0)
            {
                cout << "Solde actuel : " << solde << endl;
            }
            break;
        }
        case 5:
            // Affichage de tous les comptes
            gestionnaireComptes.afficherComptes();
            break;
        case 6:
            // Quitter le programme
            cout << "Au revoir !" << endl;
            break;
        default:
            // Gestion d'une entrée invalide
            cout << "Choix invalide. Veuillez réessayer." << endl;
        }
    }

    return 0;
}
