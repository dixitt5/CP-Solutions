# Program to check whether a number is even or odd
# uses Bitwise AND operator
 
def isOdd(n) :
 
    # n&1 is 1 for odd
    return (n & 1);
 
# main
n = int(input("Enter a number: "));
if isOdd(n) :
    print("Odd Number")
else:
    print("Even Number");
