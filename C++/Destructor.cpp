#include <iostream>
#include <conio.h>
using namespace std;

class counter
{
    int id;
    public:
        counter(int i)
        {
            id = i;
            cout<<"Constructor of object with ID: "<<id<<endl;
        }

        ~counter()
        {
            cout<<"Destructor with ID: "<<id<<endl;
        }
};

int main(){
    counter c1(1);
    counter c2(2);
    counter c3(3);
    cout<<"\nEnd of Main"<<endl;
}


