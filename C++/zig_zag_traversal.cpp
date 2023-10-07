#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <queue>

using namespace std;

// Definition of a binary tree node
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to perform Zigzag traversal of a binary tree
vector<int> zigZagTraversal(Node *root)
{
    vector<int> v;
    if (root == NULL)
    {
        return v;
    }
    bool lr = true;

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> ans;
        for (int i = 0; i < size; i++)
        {
            Node *frontnode = q.front();
            q.pop();
            ans.push_back(frontnode->data);
            if (frontnode->left)
            {
                q.push(frontnode->left);
            }
            if (frontnode->right)
            {
                q.push(frontnode->right);
            }
        }
        if (!lr)
        {
            reverse(ans.begin(), ans.end());
        }
        for (auto i : ans)
        {
            v.push_back(i);
        }
        lr = !lr;
    }
    return v;
}

// Function to create a sample binary tree
Node *createSampleTree()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    return root;
}

int main()
{
    Node *root = createSampleTree();
    vector<int> result = zigZagTraversal(root);

    cout << "Zigzag Traversal: ";
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
