#include <iostream>

using namespace std;

int main()
{
    // (initialisation; condition; incrementation)
    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }

    for (int i = 5; i > 0; i--)
    {
        cout << i << "\n";
    }

    /* Nested Loops */
    // Outer loop
    for (int i = 1; i <= 2; i++)
    {
        cout << "Outer: " << i << "\n";

        // Inner loop
        for (int j = 1; j <= 3; ++j)
        {
            cout << "Inner: " << i << "\n";
        }
    }

    // The foreach Loop
    int peopleAge[5] = {1, 2, 3, 4, 5};
    for (int i : peopleAge)
    {
        cout << i << "\n";
    }

    return 0;
}