#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("12345");
    string s2("abcde");
    s1.append(s2);
    cout << s1 << endl;

    s1.append(s2, 1, 2);
    cout << s1 << endl;

    cout<<s1<<" "<<s2<<endl;
    s1.insert(4, s2);
    cout << s1 << endl;

    s1.erase(4, 5);
    cout << s1 << endl;

    s1.replace(4, 5, s2);
    cout << s1 << endl;

    s1.replace(4, 5, s2, 1, 2); // 4,5 is the position and length of s1 and 1,2 is the position and length of s2
    cout << s1 << endl;
}