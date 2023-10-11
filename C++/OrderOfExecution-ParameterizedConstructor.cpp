#include <iostream>
using namespace std;

class A
{
    int x;
    public:
        A(int i)
        {
            x = i;
            cout << "Calling Base Class - Parameterized " << x << endl;
        }
        ~A()
        {
            cout << "Calling Base Class - Destructor" << endl;
        }
};

class B: public A
{
    int l;
    public:
        B(int p):A(p)
        {
            l=p;
            cout << "Calling Derived Class - Parameterized " << l << endl;
        }
        ~B()
        {
            cout << "Calling Base Class - Destructor" << endl;
        }
};

int main()
{
    B obj2(1);
    return 0;
}