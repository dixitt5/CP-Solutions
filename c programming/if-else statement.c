// if else statement
#include<stdio.h>
int main(){
    float retailPrice,payableAmount;
    puts("enter the retail price: ");
    scanf("%f", &retailPrice);
    if (retailPrice>=300) {
        puts("eligible for discount");
        payableAmount = retailPrice * 0.8;
     } else {
        puts("not eligible for discount");
        payableAmount = retailPrice;
     }
     printf("discount availed : %f\n", retailPrice - payableAmount);
     printf("net payable amount : %f", payableAmount);
    return 0;
    
}
