

//Solution to the question 2124. Check if All A's Appears Before All B's on leetcode.

class Solution {
public:
    bool checkString(string s) {
    
    if(s.find('a') == std::string::npos || s.find('b') == std::string::npos) return true;

    string str = s;

    sort(str.begin(),str.end());

    return str == s;
    }
};