
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
    
    bool symetery(TreeNode* p,TreeNode* q)
    {
        if(p==NULL&&q==NULL)return true;
        
        if((p==NULL&&q!=NULL)||(q==NULL&&p!=NULL))return false;
        
        if(p->val!=q->val)return false;
        return (symetery(p->right,q->left)&&symetery(p->left,q->right));
    }
    bool isSymmetric(TreeNode* root) {
       
       return symetery(root->left,root->right);
    }
};
