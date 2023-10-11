#include <iostream>
#include <string>
using namespace std;
main()
{
    string s1("man");
    string s2("hi");
    string s3;
    s3 = s1;
    cout << s3 << endl;

    s3="neither" + s1 + "nor";
    s3+=s2;
    cout << s3 << endl;

    s1.swap(s2);
    cout << s1 << "nor" << endl;
}