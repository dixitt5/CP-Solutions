#include <iostream>
using namespace std;
class Test
{
    int a, b;
public:
void show()
{
    a=10;
    b=20;
    cout<<"object address is "<<this<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
};
int main()
{
    Test t;
    t.show();
    return 0;
}