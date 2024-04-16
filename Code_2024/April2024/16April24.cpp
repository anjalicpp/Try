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

    TreeNode* addnode(TreeNode* root,int val,int depth,int curr_depth)
    {
        if(!root)return nullptr;

        if(curr_depth==depth-1)
        {
            TreeNode* temp_left=root->left;
            TreeNode* temp_right=root->right;
            
            root->left=new TreeNode(val);
            root->right=new TreeNode(val);
            root->left->left=temp_left;
            root->right->right=temp_right;
            return root;

        }

        addnode(root->left,val,depth,curr_depth+1);
        addnode(root->right,val,depth,curr_depth+1);
        return root;


    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
       if(depth==1)
       {
        TreeNode* newnode=new TreeNode(val);
       newnode->left=root;
       return newnode ;
       }

       return addnode(root,val,depth,1);
    }
};
