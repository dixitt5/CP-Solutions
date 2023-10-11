#include <iostream>
using namespace std;
class THuman
{
public:
    string name;
    int age,height;
    void get()
    {
        cin>>this->name>>this->age>>this->height;
    }
    void put()
    {
        cout<<this->name<<" "<<this->age<<" "<<this->height<<endl;
    }
};

int main()
{
    THuman *worker[1000];
    for(int i=0;i<2;i++)
    {
        worker[i]=new THuman;
    }
    for(int i=0;i<2;i++)
    {
        worker[i]->get();
    } 
    for(int i=0;i<2;i++)
    {
        worker[i]->put();
    }
    for(int i=0;i<2;i++)
    {
        delete worker[i];
    }
}

// Code Explanation:
// 1. We have created an array of pointers of type THuman.
// 2. We have created 2 objects of type THuman using new operator and stored their addresses in the array of pointers.
// 3. We have used the arrow operator to access the members of the objects using the pointers.
// 4. We have deleted the objects using the delete operator.
// 5. We have used the arrow operator to access the members of the objects using the pointers.

// Use of NEW Keyword:
// 1. The new keyword is used to create an object dynamically.