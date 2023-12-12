#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    Person(string name, int age);

private:
    string m_name;
    int m_age;
};

Person::Person(string name, int age)
{
    m_name = name;
    m_age = age;
}

int main()
{
}