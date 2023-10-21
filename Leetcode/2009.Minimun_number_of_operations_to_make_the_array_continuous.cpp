// Problem Link:- https://leetcode.com/problems/minimum-number-of-operations-to-make-array-continuous/?envType=daily-question&envId=2023-10-10

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = n;
        
        set<int> st(nums.begin(), nums.end());
        vector<int> unique;
        for (int num : st) {
            unique.push_back(num);
        }
        int visited = 0;
        for (int mi = 0; mi < unique.size(); mi++) {
            while (visited < unique.size() && unique[visited] < unique[mi] + n) {
                visited++;
            }
            
            int subAns = visited - mi;
            ans = min(ans, n - subAns);
        }
        
        return ans;
    }
};