#include <bits/stdc++.h>
using namespace std;

int countDigit(long long n)
{
    if (n/10 == 0)
        return 1;
    return 1 + countDigit(n / 10);
}

void countSort(int arr[],int size)
{
    int max=INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    int min=INT_MAX;
    for (int i = 0; i < size; i++){
        if (arr[i] < min)
            min = arr[i];
    }
    int fsize=max-min+1;
    int frequency[fsize+1]={0};

    for (int i = 0; i < size; i++)
    {
        frequency[arr[i]]++;
    }
    
}

void radixSort(int arr[],int n){

    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    // cout<<max;
    int digits = countDigit(max);
    cout<<digits;
    for(int i=0;i<digits;i++){
        
    }
}

int main(){

    int arr[]={23,64,28,96,84,16,90};
    radixSort(arr,7);

    return 0;
}
