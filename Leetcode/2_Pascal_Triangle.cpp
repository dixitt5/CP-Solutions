// Problem Question : https://leetcode.com/problems/pascals-triangle/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
// if any specific number find in tringle like 5th row's 3rd number simply you do
// r-1                  in our case      4                 4 * 3
//    C                                    C        =     ------   =  6 
//     c-1                                   2             2 * 1

// Solution 1 : 
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pt(numRows);
        
        for(int i = 0 ; i < numRows ; i++){
            pt[i].resize(i+1);
            pt[i][0] = pt[i][i] = 1 ;
            
            for(int j = 1 ; j < i ; j++){
                pt[i][j] = pt[i-1][j-1] + pt[i-1][j];
            }
        }
        return pt;
    }
};



// Solution 2 :
class Solution2 {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> pascal(numRows);
        pascal[0].push_back(1);
        
        for(int i = 1 ; i < numRows ; i++)
        {
            pascal[i].push_back(1);
            for(int j = 0 ; j < (i-1) ; j++){
                pascal[i].push_back(pascal[i-1][j] + pascal[i-1][j+1]);
            }
            pascal[i].push_back(1);
        }
        return pascal;
    }
};
int main(){
ios::sync_with_stdio(0); 
cin.tie(0);

    return 0;
}