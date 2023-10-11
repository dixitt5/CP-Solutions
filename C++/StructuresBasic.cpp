#include <iostream>
using namespace std;
struct employee
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    employee e1;
    cout << "Enter Full name: ";
    cin.get(e1.name, 50);
    cout << "Enter age: ";
    cin >> e1.age;
    cout << "Enter salary: ";
    cin >> e1.salary;
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << e1.name << endl;
    cout << "Age: " << e1.age << endl;
    cout << "Salary: " << e1.salary;
    return 0;
}