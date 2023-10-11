#include <iostream>
using namespace std;

class Complex
{
    int x, y;
public:
    Complex()
    {
        x = 10;
        y = 20;
    }
    Complex(int a, int b)
    {
        x = a;
        y = b;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
    void show()
    {
        cout << x << "+i" << y;
    }
};

int main()
{
    Complex C1(2, 3), C2(4, 5), C3;
    C3 = C1 + C2;
    C3.show();
}