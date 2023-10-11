//   Seek
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ofstream myFile;
    ifstream file;
    char ch[30];
    char text;

    file.open("result.txt", ios::in);
    if (file)
    {
        file.seekg(7, ios::beg);
        cout<<"The output after skipping first n bytes is: ";
        while(!file.eof())
        {
            file.get(text);
            cout<<text;
        }
    }
    else
    {
        cout<<"Error in opening file"<<endl;
    }
    file.close();
}