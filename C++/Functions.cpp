#include <iostream>
using namespace std;
struct profile
{
    int id;
};
struct employee
{
    profile p;
};

int main()
{
    employee e;
    int &ref=e.p.id;
    ref=34;
    cout<<e.p.id<<endl;
}
