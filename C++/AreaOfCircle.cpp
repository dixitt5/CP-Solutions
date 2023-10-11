// Using PUBLIC Access Specifier

#include <iostream>
using namespace std;

class Circle{
    public:
    double radius;
    double compute_area()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    Circle obj;
    obj.radius = 5.5;
    cout << "Radius is: " << obj.radius << "\n";
    cout << "Area is: "<<obj.compute_area();
    return 0;

}

// Using PRIVATE Acess Specifier

// #include <iostream>
// using namespace std;
// class Circle{
//     private:
//         double radius;
//     public:
//         void compute_area(double r)
//         {
//             radius = r;
//             double area = 3.14 * radius * radius;
//             cout << "Radius is : " << radius << endl;
//             cout << "Area is : " << area << endl;

//         }
// }