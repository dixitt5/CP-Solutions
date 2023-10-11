#include <iostream>
#include <conio.h>
using namespace std;
class employee
{
    char name[50];
    int age;
    public:
        void getdata(void);
        void putdata(void);
};

void employee::getdata(void)
{
    cout<<"\n Enter the name of the Employee: ";
    cin>>name;
    cout<<"\n Enter the age of Employee: ";
    cin>>age;
}

void employee::putdata(void)
{
    cout<<"\n Entered name is: "<<name;
    cout<<"\n Entered age is: "<<age;
}