// Problem Link : https://leetcode.com/problems/find-largest-value-in-each-tree-row/


/*SOLUTION*/

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        
        if(!root) return {};
        
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            
            int maxi=INT_MIN;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                maxi=max(maxi,node->val);
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};
