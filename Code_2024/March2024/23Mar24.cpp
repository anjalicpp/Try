143. Reorder List

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
    void reorderList(ListNode* head) {
       stack<ListNode*>st;
       ListNode* temp=head;
       int count=0;

       while(temp!=NULL)
       {
        count++;
        st.push(temp);
        temp=temp->next;
       }

       count=count/2;
       
       ListNode* curr=head;
       ListNode* forward=NULL;
       ListNode* now=NULL;
       

       for(int i=0;i<count;i++)
       {
        forward=curr->next;
        now=st.top();
        curr->next=now;
        now->next=forward;
        st.pop();
        curr=forward;

       }
        curr->next=NULL;

    }
};
