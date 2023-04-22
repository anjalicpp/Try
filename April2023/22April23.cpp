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
   /* ListNode* reverse(ListNode *head)
    {
        ListNode * curr=head;
         ListNode *prev=NULL;
           ListNode * next=NULL;  
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
                
        }
      return prev;   
    }
    
    void insertattail(stru)*/
    
   // ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    //{
        /* ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* newnode=new ListNode(sum%10);
            temp->next=newnode;
            temp=temp->next;
        }
        return dummy->next;*/
        ListNode* insert_tail(ListNode *head, int val)
    {
        ListNode *ptr = new ListNode(val);
        ListNode *temp = head;
        if (head == NULL)
        {
            head = ptr;
            return head;
        }
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        return head;
    }
    ListNode* adding(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = NULL;
        int carry = 0;
        int sum = l1->val + l2->val;
        while (l1 || l2 || carry)
        {
            int val1 = 0, val2 = 0;
            if (l1)
                val1 = l1->val;
            if (l2)
                val2 = l2->val;
            sum = val1 + val2 + carry;

            ans = insert_tail(ans, sum % 10);
            carry = sum / 10;

            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        return ans;
    }
    ListNode* addTwoNumbers(ListNode *l1, ListNode *l2)
    {  	
        return adding(l1, l2);
    }
        
    
};
