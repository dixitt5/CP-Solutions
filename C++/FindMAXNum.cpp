#include<iostream>
using namespace std;
int FindMaxNum(int num1, int num2, int num3);
int main(){
    int a;
    cout << "Enter your first number: " << endl;
    cin >> a;
    int b;
    cout << "Enter your second number: " << endl;
    cin >> b;
    int c;
    cout << "Enter your third number: " << endl;
    cin >> c;
    int MaxNum = FindMaxNum(a,b,c);
    cout << "Maximum number is: " << MaxNum << endl;
}

int FindMaxNum(int num1, int num2, int num3){
    if(num1>num2 && num1>num3){
        return num1;
    }
    else if(num2>num1 && num2>num3){
        return num2;
    }
    else{
        return num3;
    }
}