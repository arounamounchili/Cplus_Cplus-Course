
#include <iostream>
using namespace std;

double soustraction (double a , double b){

return a-b ; 

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
}


