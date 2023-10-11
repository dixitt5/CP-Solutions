class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int set_sum=0;
        int vector_sum=0;
      set<int> s1;
      for(int i=0;i<nums.size() ; i++)
      {   vector_sum+=nums[i];
          s1.insert(nums[i]);
      }
      for(auto it: s1)
      {
          set_sum+=it;
      }
       return (2*set_sum - vector_sum);
    }
};
