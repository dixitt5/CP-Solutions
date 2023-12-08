#include <iostream>
#include <math.h>
using namespace std;

int main()
{ int x,temp,temp1,y,n,n1,n2,sum;
  cout<<"Enter a number: ";
  cin>>x;
  temp=x;
  temp1=x;
  n=0;
  while(x!=0)
  { x=x/10;
    n++;
  }

  sum=0;
  while(temp!=0)
  { n1=temp%10;
    n2=pow(n1,n);
    sum=sum+n2;
    temp=temp/10;
  }
  if (sum==temp1)
  { cout<<"It's an Armstrong number.";
  }
  else cout<<"It's not an Armstrong number.";


return 0;
}


