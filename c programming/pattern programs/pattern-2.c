// Output:Hollow Right Triangle Star Pattern
// Enter the number of rows:10
// *
// **
// * *
// *  *
// *   *
// *    *
// *     *
// *      *
// *       *
// **********

#include<stdio.h>
int main()  
{  
    int n;  
    printf("Enter the number of rows:");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
        if(j==1|| i==j || i==n )  
        {  
            printf("*");  
        }  
        else  
        printf(" ");  
        }  
        printf("\n");  
    }  
    return 0;  
}  