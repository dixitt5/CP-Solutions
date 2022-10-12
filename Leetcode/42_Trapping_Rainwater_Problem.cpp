class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1;
        int lMax = height[0], rMax = height[n-1];
        
        int ans = 0;
        
        while(l <= r){
            if(height[l] < height[r]){
                if(height[l] >= lMax)
                    lMax = height[l];
                else
                    ans += lMax - height[l];
                
                l++;
            }else{
                if(height[r] >= rMax)
                    rMax = height[r];
                else
                    ans += rMax - height[r];
                
                r--;
            }
        }
        
        return ans;
    }
};