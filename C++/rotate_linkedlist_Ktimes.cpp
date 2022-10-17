#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
class Solution
{
    public:
    Node* rotate(Node* head, int k)
    {
        Node* curr=head;
        Node* tail=head;
        int count=1;
        while(tail->next!=NULL){
            tail=tail->next;
            count++;
        }
        if(k==0){
            return head;
        }
        for(int i=1;i<k;i++){
            curr=curr->next;
        }
        tail->next=head;
        head=curr->next;
        curr->next=NULL;
        return head;
    }
       
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
  
        int n, val, k;
        cout<<"Enter Size:"<<endl;
        cin>>n;
        cout<<"Enter elements:"<<endl;
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        cout<<"Enter K:"<<endl;
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    return 1;
}
