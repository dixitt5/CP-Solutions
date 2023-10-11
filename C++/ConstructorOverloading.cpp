// Overloading of Constructors means :-
// 1. Same name of Constructors
// 2. Different number of parameters
// 3. Different type of parameters

// Constructor Overloading using only a single object
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string n, int a) {
        name = n;
        age = a;
    }
    Person() {
        name = "noname";
        age = 0;
    }
};

int main() {
    Person person1("David", 21);
    cout << person1.name << " " << person1.age << endl;
    // Another parameter in same object
    person1 = Person("John", 25);
    cout << person1.name << " " << person1.age << endl;
    // Why person1 = Person("John", 25); is used and not Person person1("John", 25); ?
    // Because, Person person1("John", 25); is used to create a new object, but we want to change the value of the same object


    Person person2;
    cout << person2.name << " " << person2.age << endl;

    return 0;
}

// Constructor Overloading using only a single object