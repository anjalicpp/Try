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
