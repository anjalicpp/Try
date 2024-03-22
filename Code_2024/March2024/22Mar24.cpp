234. Palindrome Linked List

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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        vector<int>vec;

        while(temp!=NULL)
        {
            vec.push_back(temp->val);
            temp=temp->next;
        }
        
        int i,j;
        int n=vec.size();
        for(i=0,j=n-1;i<=j;i++,j--)
        {
            if(vec[i]!=vec[j])return false;
        }
        return true;
        
    }
};
