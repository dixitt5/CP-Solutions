#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int rollno;
    float fees;
public:
    Student(int r, float f)
    {
        rollno = r;
        fees = f;
    }
    void display()
    {
        cout << rollno << " " << fees << endl;
    }
    operator int()
    {
        return rollno;
    }
    operator float()
    {
        return fees;
    }
};

int main()
{
    Student s1(101, 4500.50);
    int x;
    float y;
    x = s1;
    y = s1;
    cout << x << endl;
    cout << y << endl;
    return 0;
}

// Explanation of the above code
// In the above program, we have defined two conversion functions, one for int and another for float.
// When we write x = s1, the compiler will call the conversion function for int and when we write y = s1,
// the compiler will call the conversion function for float.
// Thus, the above program will print the rollno and fees of the student s1.
// The conversion functions are also called type-cast operator because they convert one type of data to another type.
// The conversion functions must be member functions of the class.
// They cannot be friend functions because friend functions are not called with an object.