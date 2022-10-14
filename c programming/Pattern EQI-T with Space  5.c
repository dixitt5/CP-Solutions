#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k,n;
   printf("Enter How Many Rows to Print: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   { k=1;
     for(j=1;j<=(n*2-1);j++)
     {
      if(j>=(n+1)-i && j<=(n-1)+i && k)
        { printf("*");
          k=0; }
      else{
        printf(" ");
        k=1;
       }
     }
   printf("\n");
   }
   getch();
}

