1669. Merge In Between Linked Lists
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
     ListNode* ans=list1;
     ListNode* temp=list1;
    
    for(int i=0;i<a-1;i++)
    {
        temp=temp->next;
    }
    ListNode*pointer1=temp;

    for(int i=a;i<b+1;i++)
    {
        temp=temp->next;
    }
    ListNode*pointer2=temp->next;
    pointer1->next=list2;

    temp=list2;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=pointer2;
    return ans;
    }
};
