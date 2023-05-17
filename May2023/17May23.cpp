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
    int pairSum(ListNode* head) {
        ListNode*temp=head;
        vector<int> v;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=v.size()-1;
        //int sum=0;
        int maxi=0;
                while(i<j)
        {
            int sum=0;
            sum=v[i]+v[j];
            maxi=max(sum,maxi);
            i++;j--;
        }
        return maxi;
    }
};
