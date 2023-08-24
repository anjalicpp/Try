107. Binary Tree Level Order Traversal II
Given the root of a binary tree, return the bottom-up level order traversal of its nodes' values. (i.e., from left to right, level by level from leaf to root).

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         vector<vector<int>> ans;
         stack<vector<int>>s;
        queue<TreeNode*>q;
       // vector<int>level;
        
        if(root==NULL)
            return ans;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++)
            {
               TreeNode*temp=q.front();
                q.pop();
                if(temp->left!=NULL)q.push(temp->left);
                if(temp->right!=NULL)q.push(temp->right);
                //q.pop();
                level.push_back(temp->val);
                
            }
           s.push(level); 
        }
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
      return ans;  
    }
};
