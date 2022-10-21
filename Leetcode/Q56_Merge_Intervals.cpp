class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        /* First, the intervals vector is sorted to make sure
           intervals[i][0]>=intervals[i-1][0] */
        /* Then the start and the end of the present interval is
           defined. If the start element of the current interval is less
           than the end of our present interval,this shows overlap and we
           update the value of end only if intervals[i][1]>end([2,5][3,6]->[2,6]
           but [2,5][3,4]->[2,5]) */
        /* The start end pairs are pushed into answer vector<vector<int>> 
           as we iterate and once in the end to push the last interval*/
        
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int start=intervals[0][0];
        int end=intervals[0][1];
        for(int i=1 ; i<n ; i++){
            if(intervals[i][0]<=end){
                end=max(intervals[i][1],end);
                continue;
            }
            else{
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};