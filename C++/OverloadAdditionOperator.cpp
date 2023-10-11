// You are using GCC
#include <iostream>
#include <conio.h>
using namespace std;
class sum
{
    public:
        int b,a;
        sum() //constructor
            {b=50;}
        void set_data()
        {
            cout<<"Enter A: "<<endl;
            cin>>a;
        }
        int operator+(sum s1)
        {
            return(a+s1.b);
        }
};

int main()
{
    int d;
    sum s,t;
    s.set_data();
    d=s+t;
    cout<<"SUM is : "<<d;
    getch();
}