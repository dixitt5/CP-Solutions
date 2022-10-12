#include<iostream>
using namespace  std;
int main()
{
    int i,j,n;
    cout<<"Enter any number.";
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(j=i*2-1;j<=n-2;j++)
        cout<<"  ";
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=1;i<=n/2;i++)
    {
        for(j=i;j<=n/2;j++)
        {
            cout<<"* ";
        }
        for(j=1;j<i*2-1;j++)
        cout<<"  ";
        for(j=i;j<=n/2;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
