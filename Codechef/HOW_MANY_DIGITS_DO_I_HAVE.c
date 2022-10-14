/*
Problem
Write a program to obtain a number (N)(N) from the user and display whether the number is a one digit number, 2 digit number, 3 digit number or more than 3 digit number

Input:
First line will contain the number NN,
Output:
Print "1" if N is a 1 digit number.

Print "2" if N is a 2 digit number.

Print "3" if N is a 3 digit number.

Print "More than 3 digits" if N has more than 3 digits.

Constraints
0 \leq N \leq 10000000≤N≤1000000
Sample Input:
9
Sample Output:
1

*/
#include <stdio.h>

int main(void) {
    int n,count;
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        count++;
    }
    (count>3)?printf("More than 3 digits"):printf("%d",count);
	return 0;
}