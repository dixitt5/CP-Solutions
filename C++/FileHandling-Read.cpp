#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ifstream rf("result.txt");
    // string line;
    // // Without Loop
    // getline(rf, line);
    // cout << line << endl;

    // With Loop
    // while (getline(of, line))
    // {
    //     cout << line << endl;
    // }

    char s[10];
    ifstream inf("result.txt");
    inf >> s;
    inf.close();
    cout << s << endl;

    return 0;
}