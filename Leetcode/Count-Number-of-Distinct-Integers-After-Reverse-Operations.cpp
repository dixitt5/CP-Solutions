class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int s = nums.size();
        for(int i=0; i<s; i++)
        {
            int n = nums[i];
            int rev = 0;
            while(n!=0)
            {
                int digit = n%10;
                rev = (rev*10)+digit;
                n /= 10;
            }
            nums.push_back(rev);
        }
        
        map<int, int>m;
        for(int i=0; i<nums.size(); i++)
        {
            int n = nums[i];
            m[n]++;
        }
        int count = m.size();
        /*for(auto pr:m)
        {
            if(pr.second>1)
            {
                count--;
            }
        }*/
        return count;
    }
};
