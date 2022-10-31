bool find132pattern(vector<int>& nums) {
        int s3 = INT_MIN;
        stack<int>s;
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(nums[i]<s3)
            {
                return true;
            }
            else
            {
                while(!s.empty() && nums[i]>s.top())
                {
                    s3 = s.top();
                    s.pop();
                }
                s.push(nums[i]);
                
            }
        }
        return false;
    }
