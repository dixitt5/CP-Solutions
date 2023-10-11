// Stream Operation
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fp; // Object of type ofstream

    fp.open("result.txt", ios::out); // Open file
    if (fp)
    {
        fp<<"Iamneo.ai"<<endl;
        fp<<"Lovely Professional University"<<endl;
        fp<<"C++ Tutorial"<<endl;
        fp<<"Object Oriented Programming"<<endl;
    }

    // If any error occurs while opening file
    else
    {
        cout<<"Error in opening file"<<endl;
    }
return 0;
}