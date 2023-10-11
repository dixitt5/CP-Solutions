#include <iostream>
using namespace std;
class Test
{
    int a, b;
public:
void show (int a, int b)
{
    this->a = a;
    this->b = b;
}
void display()
{
    cout << "a = " << a << " b = " << b << endl;
    // this pointer is used to print the address of the current object
    cout << "Address = " << this << endl;
    // why address is printed : because this pointer is a pointer which points to the current object

    // Print the address of 'a' using the this pointer
    cout << "Address of a = " << &(this->a) << endl;

    // Print the address of 'b' using the this pointer
    cout << "Address of b = " << &(this->b) << endl;

    cout << "Address of current object = " << this << endl;
}
};

int main()
{
    Test t;
    t.show(10, 20);
    t.display();
    return 0;
}