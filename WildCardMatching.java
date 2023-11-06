class Solution {
    public boolean isMatch(String s, String p) {
        dp = new int[s.length()][p.length()];
        return helper(s, p, 0, 0);
    }

    int[][] dp;
    
    private boolean helper(String s, String p, int iS, int iP) {
        // base case one: retrun true if we match all chars to the end
        if((iS == s.length() && iP == p.length()) 
        || (iS == s.length() && isRestAllAsterisk(p, iP))) {
            return true;
        }
        // base case two: return false if only one of them make it to the end
        if(iS >= s.length() || iP >= p.length()) {
            return false;
        }
        // base case three: return false if current p is not '?' or '*' and is nat a matched char to s
        if(p.charAt(iP) != '?' && p.charAt(iP) != '*' && s.charAt(iS) != p.charAt(iP)) {
            return false;
        }
        // if we already have an answer, just return the answer
        if(dp[iS][iP] != 0) {
            return dp[iS][iP] == 1;
        }
        boolean res = false;
        switch(p.charAt(iP)) {
            case '?':
                // have to match one char
                res = res || helper(s, p, iS + 1, iP + 1);
                break;
            case '*':
                // tricky part
                // we can either match multiple chars or nothing
                res = res || helper(s, p, iS, iP + 1); // match nothing
                res = res || helper(s, p, iS + 1, iP + 1); // match one char
                res = res || helper(s, p, iS + 1, iP); // match one char with no cost
                break;
            default:
                // same char, have to match one char
                res = res || helper(s, p, iS + 1, iP + 1);
        }
        // memorize answer for later use
        dp[iS][iP] = res ? 1 : -1;
        return res;
    }

    private boolean isRestAllAsterisk(String p, int iP) {
        for(int i = iP ; i < p.length() ; i++) {
            if(p.charAt(i) != '*') {
                return false;
            }
        }
        return true;
    }
}
