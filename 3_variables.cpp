#include <iostream>
#include <string> // bibliothèque necessaire a la gestion des strings

using namespace std;

int main()
{
    // Basics C++ variables: int, float, double, char, string, bool
    // Declaring/Creating variables:    type variableName = value;
    int age = 12; // Declaration: allocation(espace en memoire) et initialisation de la variable.
    float weight;
    weight = 13.5; // initialiser la variable de preference dès la creation

    double price = 124.566;
    char letterA = 'A'; // il faut mettre le charactere entre les apostrophes
    string texte = "This is a string";
    bool isMajor = true; // or false

    cout << age << endl;
    cout << "Le sac de riz vaut: " << price << endl;
    cout << "Il est majeur: " << isMajor << endl;

    int x = 5, y = 2, z = 12; // x = y = z = 12;
    cout << x + y + z;

    // Les noms des variables doivent etre unique.

    // Les noms doivent aussi etre descritifs

    return 0;
}