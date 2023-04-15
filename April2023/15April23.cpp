/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    bool hasCycle(ListNode *head) {
        
        
        /*Floyd Algorithm
        if(head==NULL||head->next==NULL)
        {
            return false;
        }
        
       
        
        ListNode* fast=head;//fast
         ListNode* slow=head;//slow
        
        while(slow!=NULL&&fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;    //fast +2 increment
            }
            else return false;
           slow=slow->next;         //slow +1 increment
            
            if(fast==slow)             //loop detected
                return true;
        }
        if(fast==NULL)return false;
       return false; */
        
        if(head==NULL)
        {
            return false;
        }
        
        map<ListNode*,bool> visited;
        ListNode *temp=head;
        
        while(temp!=NULL)
        {
            if(visited[temp]==true)
            {
                return true;
            }
            visited[temp]=true;
            temp=temp->next;
            
        }
     return false;
    
        
    }
};
