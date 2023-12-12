#include <iostream>
#include <fstream> // allows us to work with files.

using namespace std;

int main()
{
    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "This is a first text writing in the file: 'filename.txt'.";

    // Close the file
    MyFile.close();

    string myText;
    // Read from a text file
    ifstream MyReadFile("filename.txt");

    while (getline(MyReadFile, myText)) // Read the file line by line
    {
        // Output the text from the file
        cout << myText;
    }

    return 0;
}
