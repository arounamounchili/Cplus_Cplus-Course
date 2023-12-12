#include <iostream>
#include <string>

using namespace std;

int main()
{
    // String are use for storing text
    string name = "Minteligencia";

    /* String Concatenation */
    string firstname = "Arouna";
    string lastname = "Mounchili";
    string fullname = firstname + lastname;
    string fullname2 = firstname + " " + lastname;
    cout << fullname << endl;
    cout << fullname2 << endl;

    string fullname3 = firstname.append(lastname);

    string a = "100";
    string b = "200";
    string c = a + b;
    cout << c << endl;

    /* String length */
    string academy = "Minteligencia";
    cout << "La taille du string est: " << academy.length() << endl;

    /* Access Strings */
    string carName = "Mercedes";
    cout << carName[0] << "\n";
    carName[1] = 'a';
    cout << carName << endl;

    /* Special Characters */
    string specialString = "We're the so-called \"Fast and furious\"";

    /* User inputs */
    cout << "what's your name? ";
    cin >> firstname;
    cout << "Your name is: " << firstname << endl;

    // use getline instead for input
    string fullName;
    cout << "what's your name? ";
    cin >> fullname2;
    cout << "Your name is: " << fullname << endl;

    return 0;
}