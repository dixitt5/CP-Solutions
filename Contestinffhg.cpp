#include <iostream>

#include <cstring>

using namespace std;

int main()

{

    char s1[100], s2[100];

    cout << "Enter string s1: ";

    cin.getline(s1, 100);

    strcpy(s2, s1);

    cout << "s1 = "<< s1 << endl;

    cout << "s2 = "<< s2;

    return 0;

}

Output
