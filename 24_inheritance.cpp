/*
    L'héritage consiste à créer une nouvelle classe (classe dérivée) qui
    hérite des caractéristiques de la classe existante (classe de base).
*/

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
    void info()
    {
        cout << "Vehicle with the brand name " << m_brand << ".\n";
    }

private:
    string m_brand;
};

class Car : public Vehicle
{
public:
    Car(string model)
    {
        m_model = model;
    }

private:
    string m_model;
};

int main()
{
    Car myCar("Toyota");
    myCar.info();

    return 0;
}