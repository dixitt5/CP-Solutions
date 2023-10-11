// Non Inline Member Function Definition
// Functions defined outside the class are called non-inline member functions, even though they are defined inside the class.

#include <iostream>
using namespace std;
int square(int s) // Non Inline Member Function Declaration
{
    return s*s;
}

int main(){
    cout<<"Enter number to compute its square: 5"<<endl;
    cout<<"Square of the number is: "<<square(5)<<endl;
    return 0;
}