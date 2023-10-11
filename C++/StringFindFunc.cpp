#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1=("Lovely Professional University");
    cout<<str1.find("ve")<<endl;
    cout<<str1.rfind("ve")<<endl;
    cout<<str1.find_first_of("ve")<<endl;
    cout<<str1.find_last_of("ve")<<endl;

}