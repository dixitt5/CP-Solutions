#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("result.txt");
    fout<<"India\n";
    fout<<"USA\n";
    fout<<"UK\n";
    fout.close();

    fout.open("result1.txt");
    fout<<"Delhi\n";
    fout<<"Washington\n";
    fout<<"London\n";
    fout.close();

    ifstream fin;
    fin.open("result.txt");
    char ch;
    while(fin)
    {
        fin.get(ch);
        cout<<ch;
    }
    fin.close();

    fin.open("result1.txt");
    while(fin)
    {
        fin.get(ch);
        cout<<ch;
    }
    
}