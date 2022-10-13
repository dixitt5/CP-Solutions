// Median of 2 Sorted Arrays of Different Sizes

/*
Given two sorted arrays array1 and array2 of size m and n respectively.
Find the median of the two sorted arrays.


Example 1:

Input:
m = 3, n = 4
array1[] = {1,5,9}
array2[] = {2,3,6,7}
Output: 5
Explanation: The middle element for
{1,2,3,5,6,7,9} is 5


Example 2:

Input:
m = 2, n = 4
array1[] = {4,6}
array2[] = {1,2,3,5}
Output: 3.5

Your Task:
The task is to complete the function MedianOfArrays() that takes array1 and array2 as input and returns their median. 

Time Complexity of the proposed alogrithm is:
Time Complexity: O(min(log n, log m)).

The Space Complexity of the below algorithm is
Space Complexity: O(1);

*/


// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int n1 = array1.size(), n2 = array2.size();
        // assuming n1<n2
        if(n1>n2)
            return MedianOfArrays(array2, array1);
        int low = 0, high = n1;
        while(low<=high)
        {
            int i1 = low+(high -low)/2;
            int i2 = (n1+n2+1)/2-i1;
            
            int min1 = (i1==n1)?INT_MAX:array1[i1];
            int max1 = (i1==0)?INT_MIN:array1[i1-1];
            int min2 = (i2==n2)?INT_MAX:array2[i2];
            int max2 = (i2==0)?INT_MIN:array2[i2-1];
            
            if(max1<=min2 && max2<=min1)
            {
                if((n1+n2)%2 ==0)
                    return (double)(max(max1, max2)+min(min1, min2))/2;
                else
                    return (double)(max(max1, max2));
            }
            else if(max2>min1)
                // high = i1-1;
                low = i1+1;
            else
                // low = i1+1;
                high = i1-1;
        }
    
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends