#include <iostream>
#include <string>
using namespace std;
//Sorting an array with Selection sort
void sorted(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
//Reversing array
void reverse(int arr[],int size){
    for(int i = 0;i<size/2;i++){
        int temp = arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}
//Searching element in array with binary search
int BinarySearch(int arr[],int size,int left,int right,int elem){
    int middle = (left+right)/2;
    if(arr[middle]==elem){
        return middle;
    }else if(arr[middle]>elem){
        return BinarySearch(arr,size,left,middle-1,elem);
    }else if(arr[middle]<elem){
        return BinarySearch(arr,size,middle+1,right,elem);
    }
    return -1;
}
int main(){
    int size;
    cout << "Size of array --->";
    cin >> size;
    int arr[size];
    cout << "Element of array --->";
    for(int i =0;i<size;i++){
        cin >> arr[i];
    }
    int elem;
    cout << "Searching Element --->";
    cin >> elem;
    cout << "Index of element is ---> "<<BinarySearch(arr,size,0,size-1,elem) << endl;
}