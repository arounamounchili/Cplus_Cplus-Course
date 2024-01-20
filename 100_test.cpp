
#include <iostream>
using namespace std;

double soustraction (double a , double b){

return a-b ; 

}
float division(float a, float b)
{
    return a / b;
}

int main()
{
  //std::cout << "Hello world!" << endl;
  double x ;
  double y; 

  cout << "entre le numbre 1 " << endl; 
  cin >> x ; 

  cout << "entre le nombre 2 " << endl ;
  cin>> y ; 
  
  double resultat = soustraction (x,y); 

  cout << " le resultat est : " << resultat << endl ;

   std::cout << "Welconne to Minteligencia!" << endl;
    cout << "Le resultat de la division est: " << division(12.0, 4.0) << endl;
  
}


