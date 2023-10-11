#include <iostream>
using namespace std;
class Person
{
    char name[30];
    int age;
public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void display()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

    int main(){
        Person x, *ptr;
        ptr = &x;
        ptr->getData();
        ptr->display();
        cout << endl;
        (*ptr).getData();
        (*ptr).display();
        return 0;
    }