/*
    La POO est un paradigme de la programmation qui repose sur le concept
    d'objects. Les object sont des instances de classes, qui sont des structures
    regroupant des données (appelées membres) et des fonctions (appélees méthodes)
    qui agissent sur ces données. La POO vise à organiser le code de manière
    plus modulaire, réutilisable et compréhensible en modélisant le monde réel
    sous forme dòbjects.
*/

/*
    Une classe en C++ est une structure qui regroupe des données (appelées membres)
    et des fonctions (appelées méthodes de la classe) qui peuvent opérer sur ces
    données. Les classes sont utilisées pour créer des objects, qui sont des
    instances spécifiques de la classe.
*/

#include <iostream>

class MyClass
{
public:
    float value;
    int value2;

    void sayHello() // Method/function defined inside the class
    {
        std::cout << "Hello!\n";
    }

    int addition(int a, int b);
};

int MyClass::addition(int a, int b) // Outside the class
{
    return a + b;
}

int main()
{
    MyClass objet1;
    objet1.value = 12;
    objet1.value2 = 1;
    std::cout << objet1.value << "\n"
              << objet1.value2 << std::endl;

    // Multiple Objects
    MyClass objet2;

    objet1.sayHello();
    objet1.addition(12, 4);
}

class Voiture
{
public:
    // membres de la classe
    std::string modele;
    int annee;
    double prix;

    // Mèthode de la classe pour afficher les details de la voiture
    void afficherDetails()
    {
        std::cout << "Modèle: " << modele << "\nAnnée: " << annee
                  << "\nPrix: " << prix << " euros" << std::endl;
    }
};

// Les classes permettent de regrouper des données et des fonctionnalités
// connexes, facilitant ainsi la modélisation d'entités du monde réel dans
// un programme informatique.

int main()
{
    // Création d'une instance de la classe voiture
    Voiture maVoiture;

    // Initialisation des membres de la classe en utilisant l'operateur '.'
    maVoiture.modele = "Toyota";
    maVoiture.annee = 2004;
    maVoiture.prix = 20000;

    // Appel de la méthode pour afficher les details de la voiture
    maVoiture.afficherDetails();
}
