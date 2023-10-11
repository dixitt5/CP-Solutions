#include <iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout << "\nCalling default Base Class constructor";
        }
        ~A()
        {
            cout << "\nCalling Base Class destructor";
        }
};

class B:public A
{
    public:
        B()
        {
            cout << "\nCalling default Derived Class constructor";
        }
        ~B()
        {
            cout << "\nCalling Derived Class destructor";
        }
};

int main()
{
    B b;
    return 0;
}