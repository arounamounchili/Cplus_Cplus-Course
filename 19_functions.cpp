#include <iostream>

using namespace std;

/* Afunction is a block of code wihich only runs when it is called.*/

// Function without return value: Void signifie "néant" en anglais
void sayHello()
{
    cout << "hello, Minteligencia \n";
}

// Parameters and arguments
void ditBonjour(string nom)
{
    cout << "Bonjour " << nom << endl;
}

// Multiple parameters
void presentation(string name, int age)
{
    cout << "Bonjour " << name << ", vous avez " << age << " ans." << endl;
}

// Return Values
int addition(int a, int b)
{
    return a + b;
}

// Pass by Reference
void modifierParameter(int &a)
{
    a = 23;
}

// Pass Arrays as Function Parameters
void printArray(float weigths[3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << weigths[i];
    }
}

int main()
{
    sayHello(); // call a function
    sayHello();
    ditBonjour("Minteligencia");
    presentation("John", 45);
    int a = 12;
    cout << "La valeur de a avant la modification est: " << a << "\n";
    // Les valeurs des variables transmises aux fonctions
    // sont copiées dans de nouvelles cases mémoire
    modifierParameter(a);
    cout << "La valeur de a après la modification est: " << a << "\n";
    return 0;
}