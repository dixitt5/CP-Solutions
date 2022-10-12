//https://leetcode.com/problems/n-ary-tree-level-order-traversal/submissions/
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)return {};
        vector<vector<int>> ans;
        queue<Node*> q;
        q.emplace(root);
        while(q.size()){
            int size = q.size();
            vector<int> level;
            
            while(size--){
                Node *node = q.front();
                q.pop();
                
                level.emplace_back(node->val);
                for(const auto& child: node->children)
                    q.emplace(child);
                
            }
            
            ans.emplace_back(level);
        }
        return ans;
    }
};