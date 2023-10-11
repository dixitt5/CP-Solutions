#include <iostream>
using namespace std;
class X
{
public:
    int a;
    void f(int b)
    {
        cout << "The value of b is " << b << endl;
    }
};

int main(){
    // declare pointer to data member
    int X::*ptra = &X::a;
    // declare pointer to member function
    void (X::*ptrf)(int) = &X::f;
    // declare object of class X
    X xobject;
    // initialize data member
    xobject.*ptra = 10;
    // call member functions
    (xobject.*ptrf)(20);
    }