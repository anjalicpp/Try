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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
        {
            return NULL;
            
        }
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
            
        }
        count=count-n;
        if(count==0)
        {
            return head->next;
        }
       
        int pos=0;
        temp=head;
        
        while(pos<count-1)
        {
        
            pos++;
            temp=temp->next; 
        }
        
        temp->next=temp->next->next;
        return head;
    }
};
