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

2816. Double a Number Represented as a Linked List
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp=head;
        stack<int>st;

        while(temp!=NULL)
        {
            st.push(temp->val);
            temp=temp->next;
        }
         stack<int>sec;
         int carry=0;
         while(!st.empty())
         {
            int num=st.top()*2+carry;
            carry=num/10;
            num=num%10;
            sec.push(num);
            st.pop();
         }

         
        temp=head;
         while(temp!=NULL)
         {
            temp->val=sec.top();
            sec.pop();
            temp=temp->next;
         }

         if(carry){
            ListNode* newhead=new ListNode(carry);
            newhead->next=head;
            return newhead;
         }
         return head;
    }
};
