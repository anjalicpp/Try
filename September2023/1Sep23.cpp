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
     TreeNode* buildTree(vector<int>& preorder,int prest,int preend, vector<int>& inorder,int inost,int inoend,map<int,int>&mp)
     {
         if(prest>preend||inost>inoend)return NULL;

          TreeNode* root=new TreeNode(preorder[prest]);
          int inoRoot=mp[root->val];
          int numlft=inoRoot-inost;
          root->left=buildTree(preorder,prest+1,prest+numlft,inorder,inost,inoRoot+1,mp);
          root->right=buildTree(preorder,prest+numlft+1,preend,inorder,inoRoot+1,inoend,mp);
        return root;

     }


    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       map<int,int>mp;
       for(int i=0;i<inorder.size();i++)
       {
           mp[inorder[i]]=i;
       } 
       TreeNode* root=buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
       return root;
    }
};
