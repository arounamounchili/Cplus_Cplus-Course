#include <iostream>

using namespace std;

int main()
{
    // Booleans values
    bool isLearning = true;
    bool isSleeping = false;
    cout << isLearning; // output 1
    cout << isSleeping; // output 0

    // Les expressions booleans: return 1 or 0
    int a = 12;
    int b = 34;
    cout << (a > b);
    int isGreater = a > 34;
    cout << isGreater; // return 0:false

    cout << (10 == 10);
    cout << (1 < 0);
    cout << (1 <= 0);
    cout << (1 >= 0);

    return 0;
}