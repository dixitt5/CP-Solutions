class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<pair<int,int>>v;
        for(int i=0;i<costs.size();i++){
            v.push_back({(costs[i][0]-costs[i][1]),i});
        }
        sort(v.begin(),v.end());
        int ans=0;
        int i=0;
        for(;i<v.size()/2;i++){
            ans+=costs[v[i].second][0];
        }
        for(;i<v.size();i++){
            ans+=costs[v[i].second][1];
        }
        return ans;
    }
};
