#include <iostream>

using namespace std;

int main()
{
    int saison = 1;
    switch (saison)
    {
    case 1:
        cout << "Printemps";
        break;
    case 2:
        cout << "Été";
        break;
    case 3:
        cout << "Autone";
        break;
    case 4:
        cout << "Hiver";
        break;

    default:
        cout << "Wrong saison!";
        break;
    }

    return 0;
}