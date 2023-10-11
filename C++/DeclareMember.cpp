#include <iostream>
using namespace std;
class X
{
    public:
        int a;
        void f(int b)
        {
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){
    int X::*p = &X::a;
    void (X::*pf)(int) = &X::f;
    X xobject;
    xobject.*p = 10;
    cout<<"The value of a is "<<xobject.a<<endl;
    (xobject.*pf)(20);
}