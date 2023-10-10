#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node* parent;
    node(int dt){
        data=dt;
        right=NULL;
        left=NULL;
    }
};

node* inorderSucc(node* root){
    node* curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }return curr;
}

node* searchBST(node* root,int ele){
    if(root==NULL){return NULL;}
    else if(ele==root->data){return root;}
    else if(ele>root->data){
        searchBST(root->right,ele);
    }else{
        searchBST(root->left,ele);
    }
}

node* insertBST(node* root,node* parnt,int data){
    if(root==NULL){
        node* temp=new node(data);
        temp->parent=parnt;
        return temp;
    }
    else if(root->data<data){
        root->right=insertBST(root->right,root,data);
    }else{
        root->left=insertBST(root->left,root,data);
    }
};

void inorderBST(node* root){
    if(root==NULL){return;}
    else{
        inorderBST(root->left);
        cout<<root->data<<" ";
        inorderBST(root->right);
    }
}

node* deleteBST(node* root,int ele){
    node* ntd=searchBST(root,ele);
    if(ntd==root && ntd->right==NULL && ntd->left==NULL){  //If there's only 1 node in the tree
        free(ntd);
    }
    else if(ntd==root && ntd->right==NULL){       //root has elements on only left subtree and to delete the root itself
        ntd->data=ntd->left->data;
        node* nsu=ntd->left;
        ntd->left=nsu->left;
        ntd->right=nsu->right;
        free(nsu);
    }
    else if(ntd==root && ntd->left==NULL){        //root has elements on only right subtree and to delete the root itself
        ntd->data=ntd->right->data;
        node* nsu=ntd->right;
        ntd->left=nsu->left;
        ntd->right=nsu->right;
        free(nsu);
    }
    else if(ntd->left==NULL){                   //when the left subtree of the node to delete is NULL
        if(ntd->parent->right==ntd){ntd->parent->right=ntd->right;}
        else{ntd->parent->left=ntd->right;}
        free(ntd);
    }
    else if(ntd->right==NULL){                   //when the right subtree of the node to delete is NULL
        if(ntd->parent->right==ntd){ntd->parent->right=ntd->left;}
        else{ntd->parent->left=ntd->left;}
        free(ntd);
    }
    else{                                         //for all other cases
        node* part=inorderSucc(ntd->right);
        ntd->data=part->data;
        if(part->parent->left->data==part->data){
            part->parent->left=part->right;
        }
        else{
            part->parent->right=part->right;
        }  
        free(part);

    }return root;
}

int main(){
    node* root=NULL;
    
    int f;cout<<"Enter the number of nodes you want to add in the BST: ";cin>>f;
    cout<<"Enter "<<f<<" space separated integers: ";
    for(int i=0;i<f;i++){
        int a;cin>>a;
        if(i==0){root=insertBST(root,NULL,a);root->parent=NULL;}
        else{insertBST(root,NULL,a);}
    }
    inorderBST(root);
    cout<<'\n';
    int key;cout<<"Enter key to find in the BST: ";cin>>key;
    if(searchBST(root,key)==NULL){cout<<key<<" not found\n";}
    else{cout<<key<<" found\n";}
    int k;cout<<"Enter number to search for it's parent and successor: ";cin>>k;
    node* fsucc=searchBST(root,k);
    node* a= inorderSucc(fsucc->right);
    if(fsucc!=root){cout<<"Parent: "<<fsucc->parent->data<<"\n";}
    else{cout<<"Parent: NULL\n";}
    if(fsucc->right!=NULL){cout<<"Successor: "<<a->data<<"\n";}
    else{cout<<"Successor: NULL\n";}
    int y;cout<<"Enter element to delete: ";cin>>y;
    deleteBST(root,y);
    inorderBST(root);
}
