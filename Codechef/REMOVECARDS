// This is a solution to the REMOVECARDS problem of CODECHEF
#include <bits/stdc++.h>
using namespace std;
int mostFrequent(int arr[], int n)
{
    // int x =0;
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
 
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
    
    return max_count;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<n-mostFrequent(a, n)<<endl;
    }
    return 0;
}
