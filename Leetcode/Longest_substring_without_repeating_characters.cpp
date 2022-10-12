// problem link
// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char , int> mp;
        int l = 0 , r = 0;
        int ans = 0;
        for(r = 0 ; r < size(s) ; r++)
        {
            mp[s[r]]++;
            
            while(mp[s[r]] > 1)
            {
                mp[s[l++]]--;
            }
            ans = max(ans , r-l+1);
        }
        return ans;
    }
};
