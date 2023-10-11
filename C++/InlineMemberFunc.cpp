#include <iostream>
using namespace std;
class operation
{
    int a, b, add;
public:
    void get() // Inline Member Function
    {
        cout << "Enter first value:";
        cin >> a;
        cout << "Enter second value:";
        cin >> b;
    }

    void sum();
}s;
inline void operation :: sum()
{
    add = a + b;
    cout << "Addition of two numbers: " << add;
}

int main()
{
    cout << "Program using inline function\n";
    s.get();
    s.sum();
    return 0;
}

// Functions which are declared in a class declaration and defined outside the class is known as : 
// Inline Member Function because it has the keyword inline before the return type of the function.