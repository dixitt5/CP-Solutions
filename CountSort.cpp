#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[], int size){
    int countSize=arr[0];
    for(int i=1;i<size;i++){
        countSize=max(countSize,arr[i]);
    }

    vector<int> countArr(countSize+1,0);
    for(int i=0;i<size;i++){
        countArr[arr[i]]++;
    }
    for(int i=1;i<=countSize;i++){
        countArr[i]+=countArr[i-1];
    }
    int output[size];
    for(int i=size-1;i>=0;i--){
        output[--countArr[arr[i]]]=arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<output[i]<<" ";
    }cout<<"\n";

}

int main(){
    int n;
    cout<<"Enter the number of elements you want to add to the array: ";cin>>n;
    int* arr=new int[n];
    cout<<"Enter "<<n<<" space separated integers: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countSort(arr,5);
    delete[] arr;
}
