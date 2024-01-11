1026. Maximum Difference Between Node and Ancestor
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
public:

    int fun(TreeNode* root,int maxvalue,int minvalue)
    {
    if(root==NULL)
    return abs(maxvalue-minvalue);//max and min in each traversal
     maxvalue=max(root->val,maxvalue);
    minvalue=min(root->val,minvalue);

   int left= fun(root->left,maxvalue,minvalue);
   int right= fun(root->right,maxvalue,minvalue);
    
    return max(right,left);

    }
    int maxAncestorDiff(TreeNode* root) {
    if(root==NULL)return 0 ;
    return fun(root,root->val,root->val);
    
    }
};
