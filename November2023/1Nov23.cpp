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

    void solve(TreeNode*root,map<int,int>&mp)
    {
        if(root==NULL)return;

        solve(root->left,mp);
        mp[root->val]++;
        solve(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
      vector<int> ans;
      map<int,int>mp;
      solve(root,mp); 

      int Maxfreq=0;
      for(auto it:mp)
      {
          if(it.second>Maxfreq)
          {
              ans.clear();
              ans.push_back(it.first);
              Maxfreq=it.second;
          }
          else if(Maxfreq==it.second)
          {
              ans.push_back(it.first);
          }
      } 
      return ans;
    }
};
