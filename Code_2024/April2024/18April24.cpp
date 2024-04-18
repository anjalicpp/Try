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
    void dfs(TreeNode* root,string path,string &small)
    {
        if(root==nullptr)return ;

        path+=char('a'+root->val);

        if(root->left==NULL&&root->right==NULL)
        {
            reverse(path.begin(),path.end());
            if(small.empty()||path<small){
                small=path;
            }
            reverse(path.begin(),path.end());
        }
        dfs(root->left,path,small);
        dfs(root->right,path,small);
    }

    
    string smallestFromLeaf(TreeNode* root) {
      string small;
      dfs(root,"",small);
      return small;
    }
};
