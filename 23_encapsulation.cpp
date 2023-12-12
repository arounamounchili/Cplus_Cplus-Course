#include <iostream>
#include <string>

using namespace std;

// Le role de l'encapsulation est de s'assurer que les données "sensibles"
// sont cachées aux utilisateurs.

class Person
{
public:
    Person(string name, int age);

    // Setter
    void setName(string name);
    void setAge(int age);
    // Getter
    string getName() { return m_name; };
    int getAge() { return m_age; };

private:
    // Private attribute
    string m_name;
    int m_age;
};

Person::Person(string name, int age)
{
    m_name = name;
    m_age = age;
}

void Person::setName(string name)
{
    m_name = name;
}

void Person::setAge(int age)
{
    m_age = age;
}

int main()
{
    Person person1("John", 34);
    cout << person1.getName() << " is " << person1.getAge() << " years old./n";
    person1.setAge(35);
    cout << person1.getName() << " is " << person1.getAge() << " years old./n";
}