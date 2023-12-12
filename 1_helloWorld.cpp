// Notre Premier Programme

/* Directeur de préprocesseur: charge les fonctionalités du C++ pour quon puisse efferctuer certaines actions.
    De base le c++ ne sait pas faire grand chose (pas meme afficher un message a l'ecran).
    On doit donc charger des extensions que l'on appele des bibliotheqes et offrent des
    nouvelles possibilités. Ici on charge le fichier iostream.
*/
#include <iostream>

// cette ligne permet d'indiquer dans quel lot de fonctionalités
// notre fichier source va aller piocher.
// Plusieur bibliotheques: Parfois les fonctionalités ont le meme nom.
using namespace std; // on va utilisé l'espace de nom std. std => bibliothèque standard

int main() // fonction principale: tous les programme possède une fonction main
{          // Les accolades determine le debut et la fin de la fonction
    // Notre premiere instruction: affiecher un message a l'ecran
    cout << "Hello World!"; // la directive cout demande a la machine d'afficher un message à l'ecran

    // "<<" est appelé: les chevrons
    cout << "Welcome to Minteligencia Community";

    cout << "Hello World\nWelcome to Minteligencia Community\n";

    cout << "Hello World" << endl // endl crée un retour a la ligne dans la console
         << "Welcome to Minteligencia Community" << endl;

    cout << "\\ \"" << endl;

    // Ce type d'instrustion clot generalemenent les fonctions.
    return 0; // la fonction main renvoit 0 pour indiquer que tout s'est bien passé.
}