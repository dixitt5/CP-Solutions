//https://leetcode.com/problems/cherry-pickup-ii/

// recursion -> memo -> tabulation -> space optimisation
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>next(m,vector<int>(m,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if(i==j) {
                    next[i][j] = grid[n-1][i];
                }else{
                    next[i][j] = grid[n-1][i] + grid[n-1][j];
                }
            }
        }
        for(int row = n-2;row>=0;row--){
            vector<vector<int>>curr(m,vector<int>(m,0));
            for(int col1=0;col1<m;col1++){
                for(int col2=0;col2<m;col2++){
                    long maxi = -1e8;
                    for(int dcola=-1;dcola<=1;dcola++){
                        for(int dcolb=-1;dcolb<=1;dcolb++){
                            long value = 0;
                            if(col1 == col2) value = grid[row][col1];
                            else
                            value = grid[row][col1] + grid[row][col2];

                        if((col1 + dcola)>=0 && (col2+dcolb) >=0 && 
                            (col1 + dcola)<m && (col2 + dcolb) < m)
                                value +=next[col1+dcola][col2+dcolb];
                                
                        else value+= -1e8;
                            maxi = max(maxi,value);
                            }
                        }
                    curr[col1][col2] = maxi;
                }
            }
            next = curr;
        }
        return next[0][m-1];
    }
};
int main(){
    vector<vector<int>>grid={{3,1,1},{2,5,1},{1,5,5},{2,1,1}}; // 1st test case
    cout<<Solution().cherryPickup(grid)<<endl; // 24
    return 0;
}