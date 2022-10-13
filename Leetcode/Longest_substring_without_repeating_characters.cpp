//Username: amankushwaha008
//AIM : to add Longest Substring Without Repeating Characters`s solution to your repository
//date: 11 Oct 2022



// Longest Substring Without Repeating Characters

/*
Given a string s, find the length of the longest substring without repeating characters.


Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.


*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, n = s.size(), curr=0, arr[256]={0};
        
        for(int i=0; i<n; i++)
        {
            while(arr[s[i]]!=0)
            {
                arr[s[i-curr]]--;
                curr--;
            }
            if(arr[s[i]]==0)
            {
                arr[s[i]]=1;
                curr++;
            }
            res = max(res, curr);
        }
        
        return res;
    }
};