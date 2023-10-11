#include <iostream>
#include <conio.h>

using namespace std;

class Rect {
public:
    int width, height;
    
    int area() {
        return (width * height);
    }
};

int main() {
    Rect rect;
    rect.width = 3;
    rect.height = 4;

    Rect rectb;
    rectb.width = 5;
    rectb.height = 6;

    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}

// Usage of constructor over here :-
// 1. Constructor is a special member function of a class which initializes objects of a class.
// 2. In C++, Constructor is automatically called when object (instance of class) create.
// 3. Constructor has same name as the class and looks like this:
//    class_name::class_name() {
//        // constructor code
//    }
// 4. Constructor can be used to initialize private data members of a class.
// 5. Constructor can be overloaded.
// 6. Constructor can not be inherited.
// 7. Constructor can not be virtual.
// 8. Constructor can not be const.
// 9. Constructor can not be static.