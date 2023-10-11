#include <stdio.h>
using namespace std;
// program to compare two rectangles based on their dimension and calculate area using this pointer

class Rectangle
{
    public:
        int length;
        int breadth;

        int area()
        {
            return length * breadth;
        }

        int compare(Rectangle r)
        {
            return this->area() > r.area() ? 1 : 0;
        }
};

int main()
{
    Rectangle r1;
    Rectangle r2;

    r1.length = 10;
    r1.breadth = 20;

    r2.length = 15;
    r2.breadth = 20;

    if (r1.compare(r2))
    {
        printf("r1 is greater than r2");
    }
    else
    {
        printf("r2 is greater than r1");
    }

    return 0;
}