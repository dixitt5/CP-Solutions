#include<stdio.h>  
int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    //consider n=55
scanf("%d",&n);    
temp=n;    // let temp=n=55
while(n>0)    //55>0 true
{    
r=n%10;    //r=5
sum=(sum*10)+r;    //sum=0*10+5=5
n=n/10;    //n=55/10=5 
}          //repeat again n=5>0 so,r=5%10=5 ,sum=5*10+5=55,n=5/10=0.5
if(temp==sum)    //temp=sum=55
printf("palindrome number ");    //so 55 is palindrome number
else    
printf("not palindrome");   
return 0;  
}   
