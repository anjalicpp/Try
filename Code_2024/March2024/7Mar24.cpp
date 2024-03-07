876. Middle of the Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
       /* ListNode*temp=head;
        int cnt=0;
        while(temp!=NULL)
        {   cnt++;
            temp=temp->next;
            
        }
        
      int num=cnt/2+1;
        ListNode*temp1=head;
        int pos=1;
         while(pos<num)
        {   pos++;
            temp1=temp1->next;
             
            
        }
        return temp1;*/

       /* ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            
        }
        return slow;*/
       /* ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL&&fast->next!=NULL)
        {
           fast=fast->next->next;
            slow=slow->next;
           // fast=fast->next->next;
        }
        return slow;*/
        ListNode* fast=head;
         ListNode* slow=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        
        return slow;
    }
};
