#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    void animalSound()
    {
        cout << "The animal makes a sound \n";
    }
};

class Dog : public Animal
{
public:
    void animalSound()
    {
        cout << "the Dog says: bow wow \n";
    }
};

class Cat : public Animal
{
public:
    void animalSound()
    {
        cout << "the Cat says: Miow\n";
    }
};

int main()
{
    Animal myAnimal;
    Dog myDog;
    Cat myCat;

    myAnimal.animalSound();
    myDog.animalSound();
    myCat.animalSound();
}