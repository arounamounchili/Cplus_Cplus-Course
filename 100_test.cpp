
#include <iostream>
using namespace std;

int main()
{
  std::cout << "Hello world!" << endl;
}



int addition() 
{
    //fonction d'addition
    int number1 = 5;
    int number2 = 7;
    
    int resultat = addition(number1, number2);
    
    // Affichage du résultat
    std::cout << "Le résultat de l'addition est : " << resultat << std::endl;

    return 0;
}