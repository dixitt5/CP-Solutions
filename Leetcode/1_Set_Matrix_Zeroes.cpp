// Problem Question : https://leetcode.com/problems/set-matrix-zeroes/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
// Solution 1
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = 1;int row = matrix.size();int col = matrix[0].size();
        
        for(int i = 0 ; i < row ; i++){
            if(matrix[i][0]==0)
                col0 = 0;
            for(int j = 1 ; j < col ; j++){
                if(matrix[i][j]==0)
                    matrix[i][0] = matrix[0][j] = 0;
            }
        }
        
        for(int i = row - 1  ; i >=0 ; i--){
            for(int j = col - 1 ; j > 0 ; j-- ){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
            if(col0 == 0)
                    matrix[i][0]=0;
        }
    }
};

// Solution 2
class Solution2 {
public:
  void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<pair<int,int>> v;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0; j< n ; j++){
                if(matrix[i][j] == 0 ){
                    v.push_back({i,j});
                }
            }
        }
        
        for (int i = 0; i < m; i++)
    {
        if (searchingrow(i, v))
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = 0;
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (searchingcolmn(j,v))
                {
                    matrix[i][j] = 0;
                }
            }
        }
        cout << endl;
    }
    }
        bool searchingrow(int m, vector<pair<int, int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (m == v[i].first)
            return true;
    }
    return false;
}
bool searchingcolmn(int n,vector<pair<int, int>> &v)
{
    for (int j = 0; j < v.size(); j++)
    {
        if (n == v[j].second)
            return true;
    }
    return false;
}
};
int main(){
ios::sync_with_stdio(0); 
cin.tie(0);

    return 0;
}