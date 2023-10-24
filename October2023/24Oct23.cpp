class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL)return{};
        queue<TreeNode*> q;
        vector<int>ans;


        q.push(root);
        

        while(!q.empty())
        {
           int size=q.size();
           int maxi=INT_MIN;
           for(int i=0;i<size;i++)
           {
               TreeNode*node=q.front();
               q.pop();
               if(node->left)q.push(node->left);
               if(node->right)q.push(node->right);
               vector<int>temp;
               maxi=max(maxi,node->val);

           }
           ans.push_back(maxi);
        }
        return ans;    
    }
};
