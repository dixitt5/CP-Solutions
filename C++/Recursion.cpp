#include <iostream>
using namespace std;

int rec(int a)
{
    int b;
    if(a<=1)
    {
        return(1);
    }
    else
    {
        b=a*rec(a-1);
        return(b);
    }
}

int main(){
    int rec(int);
    int n, fact;
    cout<<"Enter a number: ";
    cin>>n;
    fact=rec(n);
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
}