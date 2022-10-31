class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        sort(intervals.begin(), intervals.end());
        for(int i=1; i<intervals.size(); i++)
        {
            if(intervals[i-1][1]>intervals[i][0])
            {
                count++;
                intervals[i][1] = min(intervals[i-1][1], intervals[i][1]);
            }
        }
        
        return count;
    }
};
