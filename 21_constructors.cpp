#include <iostream>
#include <string>

// Exemple du marqueur pour explication si possible
// contructeur par defaut, avec parametres, par copie

using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
    Car()
    {
        brand = "";
        model = "";
        year = 0;
    }

    Car(string b, string m, int y)
    {
        brand = b;
        model = m;
        year = y;
    }
};

int main()
{
    Car car1;
    Car car2("Mercedes", "A3", 2000);

    // Print values
    cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
}