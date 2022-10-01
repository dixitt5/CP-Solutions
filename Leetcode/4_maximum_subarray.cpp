//Problem Question : https://leetcode.com/problems/maximum-subarray/
// this question is solved with kadane's algo.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
// Solution 1 :
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs = 0,ms=nums[0];
        for(auto i : nums)
        {
            cs += i;
            ms = max(cs,ms);
            if(cs<0){
                cs=0;
            }
        }
            return ms;
    }
};

// Solution 2 :
class Solution2 {
public:
    int maxSubArray(vector<int>& nums) {
        int cs = 0,ms=0;
        bool pos = 0;
        for(auto i : nums){
            cs += i;
            if(i>=0)
                pos = 1;
            if(cs<0)
                cs=0;
            ms = max(cs,ms);
        }
        if(pos == 0){
            int maxi = *max_element(nums.begin(),nums.end());
            return maxi;
        }
        else
            return ms;
    }
};
int main(){
ios::sync_with_stdio(0); 
cin.tie(0);

    return 0;
}