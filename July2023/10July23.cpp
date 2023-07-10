111. Minimum Depth of Binary Tree
Easy
6.5K
1.2K
Companies
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

Note: A leaf is a node with no children
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
int fun(TreeNode* root)
        {
         if(root==NULL)
        {
            return 0;
        }
         int rh= fun(root->right);
        int lh= fun(root->left);
        if(lh==0||rh==0)
        return 1+lh+rh;
       // int rh= fun(root->right);
        return min(lh,rh)+1;    

        }    
    int minDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        return fun(root);
    }
};  
2600. K Items With the Maximum Sum
Easy
211
20
Companies
There is a bag that consists of items, each item has a number 1, 0, or -1 written on it.

You are given four non-negative integers numOnes, numZeros, numNegOnes, and k.

The bag initially contains:

numOnes items with 1s written on them.
numZeroes items with 0s written on them.
numNegOnes items with -1s written on them.
We want to pick exactly k items among the available items. Return the maximum possible sum of numbers written on the items.
  class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
      int ans=0;
      while(k)
      {
          if(numOnes)
          {
              ans=ans+1;
              numOnes--;
          }
          else if(numZeros)
          {
              ans=ans;
              numZeros--;
          }
          else {
              ans=ans-1;
              numNegOnes--;
          }
          k--;
      } 
      return ans; 
    }
};
1749. Maximum Absolute Sum of Any Subarray

