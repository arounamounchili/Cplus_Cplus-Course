#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Les tableaux sont utilisés pour stocker plusieurs valeurs dans une seule variable,
    // au lieu de déclarer des variables distinctes pour chaque valeur.
    string myArrays[5];
    string names[3] = {"Cedric", "Ngannou", "Arouna"};
    //                     0        1          3
    int ages[3] = {12, 34, 23};

    // Access the Elements
    cout << names[0];
    cout << names[0];

    names[0] = "Cyril";
    cout << names[0];

    /* Loop through an Array */
    for (int i = 0; i < 3; i++)
    {
        cout << names[i];
    }

    for (int i = 0; i < sizeof(names) / sizeof(int); i++)
    {
        cout << names[i];
    }

    return 0;
}