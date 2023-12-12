#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int age;
    cout << "Quel est votre age? ";
    cin >> age; // Entrez votre age dans le terminal
    cout << "Votre age est: " << age << "\n";

    // TODO: recupere la saisie pour tout les autres types de variables.
    string name;
    cout << "Quelle est votre nom? ";
    getline(cin, name);
    cout << "Votre nom est: " << name;

    string mystr;
    float price = 0;
    int quantity = 0;

    cout << "Enter price: ";
    getline(cin, mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline(cin, mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price * quantity << endl;

    return 0;
}

// check Code-runner: Run in terminal in the settings