938. Range Sum of BST
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

    void findsum(TreeNode* root, int low, int high,int &sum)
    { if(root==NULL)
    {
        return ;
    }
        if(root->val<=high&&root->val>=low)
        sum+=root->val;
        findsum(root->left,low,high,sum);
         findsum(root->right,low,high,sum);
        

    }
    int rangeSumBST(TreeNode* root, int low, int high) {
      if(root==NULL)
      {
          return 0;
      }
    int sum=0;
      findsum(root,low,high,sum);
    return sum;
    }
};
