#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char s[30];
    ofstream of("result.txt");
    // Manual Input
    string userInput;
    cout << "Enter whatever you want to write: " << endl;
    getline(cin, userInput);
    of << userInput;
    of.close();

    cout << "Data Saved to File" << endl;

    ifstream ifs("result.txt");
    ifs >> s;
    cout << s << endl;
    ifs.close();

    return 0;
}


// Can also be done by using cin instead of getline by passing char in cin