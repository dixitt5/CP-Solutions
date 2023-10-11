#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "lovely professional university";
    string str2 = "ve";
    cout << str1 << endl;
    int x = str1.find(str2);
    cout << x << endl;

    string temp = str1.substr(x + str2.size(), 30 );
    cout << temp << endl;

    int y = temp.find(str2);
    cout << y << endl;
    cout << y+x+str2.size() << endl;
}