#include <iostream>

using namespace std;

int main()
{
    /*
        Les References: Une variable de référence est une "référence" à une variable existante,
        et elle est créée à l'aide de l'opérateur &.
    */
    string food = "Pizza";
    string &meal = food;
    cout << food << "\n"; // affiche Pizza
    cout << meal << "\n"; // affiche Pizza

    /*
        Les Pointeurs
    */
    float taille = 1.75;     // declarer une Variale
    cout << &taille << endl; // Afficher l'adresse de la variable

    // Créer un pointeur
    float *ptrTaille = &taille;

    cout << ptrTaille << "\n";  // Affiche l'adresse de la variable taille
    cout << &ptrTaille << "\n"; // Affiche l'adresse du pointeur
    cout << *ptrTaille << "\n"; // Affiche la valeur de la variable taille

    *ptrTaille = 13.5; // changer la valeur de la variable taille
    cout << *ptrTaille << "\n";

    return 0;
}