
#include <iostream>
using namespace std;

float division(float a, float b);

int main()
{
    std::cout << "Welconne to Minteligencia!" << endl;
    cout << "Le resultat de la division est: " << division(12.0, 4.0) << endl;
}

float division(float a, float b)
{
    return a / b;
}