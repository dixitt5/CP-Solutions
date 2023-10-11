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

    cout<<"Enter some text here: "<<endl;
    cin.getline(ch,30);

    myFile.open("result.txt", ios::out);
    if (myFile)
    {
        myFile<<ch;
        cout<<"Data stored Successfully : \n"<<endl;
    }
    else 
    {
        cout<<"Error in creating file"<<endl;
    }
    myFile.close();
}