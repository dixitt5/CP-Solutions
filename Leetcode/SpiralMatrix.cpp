class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int total_elements=m*n;
        int startingRow=0;
        int endingCol=n-1;
        int endingRow=m-1;
        int startingCol=0;

        int count=0;
        while(count<total_elements){
            for(int i=startingCol; i<=endingCol && count<total_elements; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
        for(int i=startingRow; i<=endingRow && count<total_elements; i++){
            ans.push_back(matrix[i][endingCol]);
               count++;
        }
        endingCol--;
        for(int i=endingCol; i>=startingCol && count<total_elements; i--){
            ans.push_back(matrix[endingRow][i]);
               count++;
        }
        endingRow--;
        for(int i=endingRow; i>=startingRow && count<total_elements; i--){
            ans.push_back(matrix[i][startingCol]);
               count++;
        }
        startingCol++;
        }
        return ans;
}
};