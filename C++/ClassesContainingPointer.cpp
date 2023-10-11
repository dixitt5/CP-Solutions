#include <iostream>
using namespace std;
class Array
{
    int *arr; int size;
    public:
    void get_data(int n)
    {
        size=n;
        arr=new int[size];
        for(int i=0;i<size;i++)
        {
            cin>>(arr+i);
        }
    }

    void add()
    {
        int sum=0;
        for(int i=0;i<size;i++)
        {
            sum+=*(arr+i);
        }
        cout<<"Sum is "<<sum<<endl;
    }
};

int main()
{
    Array a;
    int n; 
    cout>>"\n Enter the size of array ";
    a.get_data(n);
    a.add(); return 0;}