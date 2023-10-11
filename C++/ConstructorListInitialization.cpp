#include <iostream>
using namespace std;

// class rectangle{
//     int l,b;
//     public:
//         rectangle(int x=12, int y=34):l(x),b(y){
//             cout<<"Constructor called"<<endl;
//         }
//         int area(){
//             return l*b;
//         }
// };
// int main()
// {
//     rectangle r;
//     cout<<"Area is "<<r.area()<<endl;
//     rectangle r1(10,20);
//     cout<<"Area is "<<r1.area()<<endl;
// }

class Base
{
    private:
        int value;
    public:
    Base (int value):value(value)
    {
        cout<<"Value is "<<value<<endl;
    }
};

int main()
{
    Base b(10);
    return 0;
}