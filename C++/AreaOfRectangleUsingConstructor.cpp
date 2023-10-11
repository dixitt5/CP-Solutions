#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int a, int b){
            length = a;
            breadth = b;
        }

int area(){
    int area = (length * breadth);
    cout << "Area of Rectangle is: " << area << endl;
}
};

int main(){
    Rectangle r(10, 20);
    r.area();
    return 0;
}