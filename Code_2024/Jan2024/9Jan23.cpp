872. Leaf-Similar Trees
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
    void traverse(TreeNode* root,vector<int>&p)
    {
        if(root==NULL)return ;
        if(root->right==NULL&&root->left==NULL)
        {
            p.push_back(root->val);
        }
        traverse(root->left,p);
        traverse(root->right,p);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>g1,g2;
       traverse(root1,g1);
       traverse(root2,g2);
        int n1=g1.size();
         int n2=g2.size();
        
        if(n1!=n2)return false;
        for(int i=0;i<n1;i++)
        {
            if(g1[i]!=g2[i])return false;
        }
        return true;
    }
};
