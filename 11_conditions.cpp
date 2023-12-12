#include <iostream>

using namespace std;

int main()
{
    /* if Statements */
    int age = 0;
    cout << "Quelle est votre age? ";
    cin >> age;

    if (age > 18)
    {
        cout << "Vous etes Majeur!\n";
    }

    /* else Statement */
    age = 20;
    if (age > 18)
    {
        cout << "Vous etes Majeur!\n";
    }
    else
    {
        cout << "Vous etes mineur!\n";
    }

    /* else if Statement */
    int time = 9;
    if (time < 12)
    {
        cout << "Bonjour!\n";
    }
    else if (time < 18)
    {
        cout << "Bon apres midi!\n";
    }
    else
    {
        cout << "Bonsoir!\n";
    }

    return 0;
}