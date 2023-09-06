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
    
    int countlen(ListNode*head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int length=countlen(head);
        if(head==NULL||length<k)
        {
            return head;
        }
        
        
        //reverse first k nodes
        ListNode*forward=NULL;
        ListNode*curr=head;
        ListNode*prev=NULL;
        int count=0;
        while(curr!=NULL&&count<k)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        
        //recursion
        
        if(forward!=NULL)
        {
            head->next=reverseKGroup(forward,k);
        }
      //return head of reversed ll
        
        return prev;
        
    }
};
