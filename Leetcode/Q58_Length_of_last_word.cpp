class Solution {
public:
    
    /* We count the number of characters in each word and reset it to 0 as we hit a 
       space. Also another variable is taken to store the latest value of length in 
       case the string is ending in sapces. */
    
    int lengthOfLastWord(string s) {
        int n=s.length();
        int length=0;
        int last=0;
        for(int i=0 ; i<n ; i++){
            if(s[i]==' '){
                if(length>0)
                    last=length;
                length=0;
            } 
            else length++;
        }
        if(length>0) last=length;
        return last;
    }
};