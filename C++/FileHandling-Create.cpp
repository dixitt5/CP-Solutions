#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream of("result.txt");
    of<<"Hello";
    of.close();
    cout<<"Data Saved\n";
}