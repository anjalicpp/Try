129. Sum Root to Leaf Numbers
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public: int sum=0;

    void fun(TreeNode*root,int digit)
    {
        if(!root)return;

        digit=root->val+10*digit;
        if(root->left==NULL&&root->right==NULL)
        {
            sum+=digit;
        }

        fun(root->left,digit);
        fun(root->right,digit);
    }
    int sumNumbers(TreeNode* root) {
       
        fun(root,sum);
        return sum;
    }
};
