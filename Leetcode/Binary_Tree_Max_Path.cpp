#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
    bool leafNode(TreeNode *curr)
    {
        return !curr->left && !curr->right;
    }
    int getPathSum(TreeNode *root, int &maxi)
    {
        if (root == NULL)
        {
            return 0;
        }
        if (leafNode(root))
        {
            maxi = max(maxi, root->val);
            return root->val;
        }
        int leftY = getPathSum(root->left, maxi);
        int rightY = getPathSum(root->right, maxi);
        maxi = max(maxi, max(root->val, max(leftY, max(rightY, leftY + rightY)) + root->val));
        return max(root->val, max(leftY, rightY) + root->val);
    }
    int maxPathSum(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int maxi = INT_MIN;
        int d = getPathSum(root, maxi);
        return maxi;
    }
};
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    cout << root->maxPathSum(root) << endl;
    return 0;
}