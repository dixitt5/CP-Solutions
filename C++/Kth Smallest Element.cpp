#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
vector<int>v;
void inorder(node* root)
{
    if(root==NULL)
    return;
    
    inorder(root->left);
    v.push_back(root->data);
    inorder(root->right);
}
int KthSmallestElement(node *root, int K)
{
    v.clear();
    inorder(root);
    int ans=-1;
    for(int i=0;i<v.size();i++)
    {
        if((i+1)==K)
        {
            ans=v[i];
            break;
        }
    }
    return ans;
}
int main()
{
    node *root=new node(30);
    root->left=new node(20);
    root->right=new node(50);
    root->left->left=new node(10);
    root->right->left=new node(40);
    root->right->right=new node(60);
    root->right->right->right=new node(70);
    cout<<KthSmallestElement(root,2);
    return 0;
}
