979. Distribute Coins in Binary Tree


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
public:int moves=0;

    int dis(TreeNode* root, int& ans) {
        if(root==NULL) return 0;
        int coins = root->val + dis(root->left, ans) + dis(root->right, ans);
        coins--;
        ans += abs(coins);
        return coins;
    }

    int distributeCoins(TreeNode* root) {
        int ans=0;
        dis(root,ans);
        return ans;
    }
};
