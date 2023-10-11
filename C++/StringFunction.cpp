#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "arlcome";
    string s2 = "wearomea";

    string s3 = "welcome";
    string s4;
    s4 = s3.substr(0,2);

    cout << s1.find("lc") << endl;
    cout << s2.find("ea") << endl;
    cout << s1.find_last_of("e") << endl;
    cout<<s4;
    return 0;
}