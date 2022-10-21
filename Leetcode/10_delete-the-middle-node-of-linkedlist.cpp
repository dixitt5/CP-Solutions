class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if(head->next==nullptr) return nullptr;
        int n=0;
        ListNode*temp=head;
        while(temp!=nullptr)
        {
            n++;
            temp=temp->next;
        }
         ListNode*slow=head;
        ListNode*pre=head;


        ListNode*fast=head;
        if(n%2==1)
        {
        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        // if(fast->next->next == nullptr)
        // {
        //   slow->next=slow->next->next;
        //   return head;
        // }

        pre->next=pre->next->next;
        return head;
        }
         while(fast->next != nullptr && fast->next->next != nullptr)
        {
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
          return head;
    }
};
