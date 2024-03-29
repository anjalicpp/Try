662. Maximum Width of Binary Tree

Given the root of a binary tree, return the maximum width of the given tree.
The maximum width of a tree is the maximum width among all levels.
The width of one level is defined as the length between the end-nodes (the leftmost and rightmost non-null nodes), where the null nodes between the end-nodes that would be present in a complete binary tree extending down to that level are also counted into the length calculation.
It is guaranteed that the answer will in the range of a 32-bit signed integer.

 

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
    int widthOfBinaryTree(TreeNode* root) {
       if(root==NULL) return 0;
       int ans=0;
       queue<pair<TreeNode*,int>>q;
       q.push({root,0});
       while(!q.empty())
       {
           int size=q.size();
           int mini=q.front().second;
           int first,last;
           for(int i=0;i<size;i++)
           {
               int cur_id=q.front().second-mini;
               TreeNode*node=q.front().first;
               q.pop();
               if(i==0)first=cur_id;
               if(i==size-1) last=cur_id;

               if(node->left!=NULL)q.push({node->left,(long)cur_id*2+1});
               if(node->right!=NULL)q.push({node->right,(long)cur_id*2+2});
           }
           ans=max(ans,last-first+1);
       }
       return ans; 
    }
};

-----------------------

 2236. Root Equals Sum of Children

You are given the root of a binary tree that consists of exactly 3 nodes: the root, its left child, and its right child.
Return true if the value of the root is equal to the sum of the values of its two children, or false otherwise.

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
    bool checkTree(TreeNode* root) {
       int childrensum=0;
       childrensum=root->left->val+root->right->val;
       int rootvalue=0;
       rootvalue=root->val;
       return rootvalue==childrensum; 
    }
};
