#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str="Welcome";
    // Size of String
    cout<<"Size: " << str.size() << endl;
    // Length of String
    cout<<"Length: " << str.length() << endl;
    // Max Size of String
    cout<<"Max Size: " << str.max_size() << endl;
    // Tells if String is empty or not
    cout<<"Empty: " << (str.empty()?"Yes":"No") << endl;
    return 0;
}