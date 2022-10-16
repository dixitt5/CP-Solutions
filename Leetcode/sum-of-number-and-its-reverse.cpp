class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int n;
        for(int i=0; i<=num; i++)
        {
            n = i;
            int rev = 0;
            while(n!=0)
            {
                int digit = n%10;
                rev = (rev*10)+digit;
                n /= 10;
            }
            if(i+rev==num)
            {
                return true;
            }
        }
        return false;
    }
};
