#include <iostream>
using namespace std;

class student
{
    protected:
        int roll_no;
    public:
        void get_number(int);
        void put_number(void);
};
void student :: get_number(int a)
{
    roll_no = a;
}
void student :: put_number(void)
{
    cout << "Roll No: " << roll_no << endl;
}

class test : public student
{
    protected:
        float sub1;
        float sub2;
    public:
        void get_marks(float, float);
        void put_marks(void);
};
void test :: get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}
void test :: put_marks(void)
{
    cout << "Marks in Subject 1: " << sub1 << endl;
    cout << "Marks in Subject 2: " << sub2 << endl;
}

class result : public test
{
    float total;
    public:
        void display(void);
};
void result :: display(void)
{
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout << "Total: " << total << endl;
}

int main()
{
    result student1;
    student1.get_number(111);
    student1.get_marks(75.0, 59.5);
    student1.display();
    return 0;
}

