#include <iostream>

using namespace std;

int main()
{
    /* Structures */
    struct Person
    {
        string name;
        int age;
        float weigth;
    };

    Person person1;
    person1.name = "Programmer";
    person1.age = 23;
    person1.weigth = 12.44;

    cout << person1.name << " a " << person1.age << " ans est pèse " << person1.weigth << " kg." << endl;

    return 0;
}