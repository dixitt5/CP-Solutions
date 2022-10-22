#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
int i, j;
bool swapp;
for (i = 0; i < n-1; i++){
	swapp = false;
	for (j=0;j<n-i-1;j++){
		if (arr[j]>arr[j+1]){
		swap(arr[j], arr[j+1]);
		swapp= true;
		}
	}

	if (swapp == false)
		break; 
}
}

void printArray(int arr[], int size){
	int i;
	for(i=0;i<size;i++)
		cout <<" "<< arr[i];
}

int main(){
	int arr[] = {5, 3, 1, 9, 8, 2, 4, 7};
	int N = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, N);
	cout <<"Sorted array: \n";
	printArray(arr, N);
	return 0;
}
