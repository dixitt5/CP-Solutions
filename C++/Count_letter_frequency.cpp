#include <bits/stdc++.h>
using namespace std;

void countFrequency(int arr[], int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;  //store array element as key and frequency as value

    for (auto x : map)
        cout << x.first << " " << x.second << endl;  //x.first -> key and x.second -> value
}

int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFrequency(arr, n);
    return 0;
}
