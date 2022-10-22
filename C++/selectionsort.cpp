#include <iostream>
using namespace std;
void selectionsort(int [],int);
int main()
{
	int a[10],i,j,n,t,min;
	cout<< "enter value of n";
	cin>>n;
	cout<<"enter array elements";
	for(i=0;i<n;i++)
	cin>>a[i];
	selectionsort(a,n);
}
void selectionsort(int a[10],int n)
{
	int i,j,t,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if (a[j]<a[min])
			  min=j;
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
	cout<<"sorted array is";
    for(i=0;i<n;i++)
      cout <<a[i]<<"\t";
   
}
//output
//enter value of n5
//enter array elements2 3 4 5 1
//sorted array is 1 2 3 4 5
