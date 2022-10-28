// Problem : 26 Remove Duplicates from Sorted Array
// Problem Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int n = nums.size();
        int prev = nums[0];
        int index = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] != prev)
            {
                nums[index] = nums[i];
                prev = nums[i];
                index++;
            }
        }
        return index;
    }
};
