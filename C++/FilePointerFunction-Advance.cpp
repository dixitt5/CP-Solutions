#include <fstream>
#include <iostream>
using namespace std;

class Employee
{
    private:
        char name[30];
        char employeeID[30];
        char joiningDate[30];
        char position[30];
        char maritalStatus[30];
        char age[10];
        char salary[10];
        char comment[100];

    public:
        void getEmp_data()
        {
            cout<<"Welcome to InfoBrother: "<<endl;
            cout<<"======================"<<endl;
            cout<<"Enter your name: "<<endl;
            cin.getline(name, 30);
            cout<<"Enter your employee ID: "<<endl;
            cin.getline(employeeID, 30);
            cout<<"Enter your joining date (DD/MM/YYYY): "<<endl;
            cin.getline(joiningDate, 30);
            cout<<"Enter your position: "<<endl;
            cin.getline(position, 30);
            cout<<"Enter your marital status: "<<endl;
            cin.getline(maritalStatus, 30);
            cout<<"Enter your age: "<<endl;
            cin.getline(age, 10);
            cout<<"Enter your salary: "<<endl;
            cin.getline(salary, 10);
            cout<<"Enter your review for our company work environment: "<<endl;
            cin.getline(comment, 100);
        }

        void showEmp_data()
        {
            cout<<"EMPLOYEE INFORMATION"<<endl;
            cout<<"===================="<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Employee ID: "<<employeeID<<endl;
            cout<<"Joining Date: "<<joiningDate<<endl;
            cout<<"Position: "<<position<<endl;
            cout<<"Marital Status: "<<maritalStatus<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Comment: "<<comment<<endl;
        }
};

class Library
{
    public:
    Employee Emp;
    fstream fp, fp1;

    void WriteEmployee()
    {
        fp.open("Employee.txt", ios::out);
        if (fp)
        {
            Emp.getEmp_data();
            fp.write((char*)&Emp, sizeof(Emp));
            cout<<"Record saved successfully"<<endl;
        }
        fp.close();
    }

    void W_displayEmp()
    {
        fp.open("Employee.txt", ios::in);
        if (fp)
        {
            while (fp.read((char*)&Emp, sizeof(Emp)))
            {
                Emp.showEmp_data();
            }
        }
        fp.close();
    } 
};

int main()
{
    Library lib;
    lib.WriteEmployee();
    lib.W_displayEmp();

    return 0;
}