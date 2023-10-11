#include <iostream>
using namespace std;

class rectangle{
    int l,b;
    public:
        rectangle(int x=12, int y=34){
            l = x;
            b = y;
        }
        int area(){
            return l*b;
        }
};
int main()
{
    rectangle r;
    cout<<"Area is "<<r.area()<<endl;
    rectangle r1(10,20);
    cout<<"Area is "<<r1.area()<<endl;
}