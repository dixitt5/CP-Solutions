class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int>ans;
        ans.push_back(label);
        int t,i=0,ans1=0;
        while(label>1){
            t=label/2;
            while(pow(2,i)<=t)i++;
            ans1=pow(2,i)-t+pow(2,i-1)-1;
            ans.push_back(ans1);
            label=ans1;
            i=0;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
