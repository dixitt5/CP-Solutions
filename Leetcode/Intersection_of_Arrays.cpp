class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    vector<int> ans;
    unordered_set<int> s;

    for(int i = 0,j = 0 ; i < nums1.size() && j < nums2.size();)
    {
        if(nums1[i] == nums2[j])
        {
            s.insert(nums1[i]);
            i++,j++;
        }
        else if(nums1[i] > nums2[j])
        {
            j++;
        }
        else 
        {
            i++;
        }
    }
    for(auto it:s)
    {
        ans.push_back(it);
    }
    return ans;
    }
};