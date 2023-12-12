/*  Les boucles vous permet de repeter les memes instructions
    plusieurs fois dans le programme. Les boucles sont répétées tant q'une
    condition est vrai
*/
#include <iostream>
using namespace std;

int main()
{
    /* While Loop */
    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }

    /* Do While */
    int j = 5;
    do
    {
        cout << j << "\n";
        j--;
    } while (j > 0);

    return 0;
}