#include <iostream>

using namespace std;

int main()
{
    /* L'instruction break peut également être utilisée pour sortir d'une boucle. */
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            break;
        cout << i << endl;
    }

    /* L'instruction continue interrompt une itération (dans la boucle),
    si une condition spécifiée est remplie, et continue avec l'itération suivante dans la boucle. */
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue;
        cout << i << endl;
    }

    return 0;
}