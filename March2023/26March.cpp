103. Binary Tree Zigzag Level Order Traversal
Medium
9K
239
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       /* if(root==NULL)
        return {{}};
        vector<vector<int>> ans;
       // vector<int> level;


        queue<TreeNode*>q;
        q.push(root);
        int flag=1;

           /* while(!q.empty())
            {
                int size=q.size();
                vector<int> row(size);
                for(int i=0;i<size;i++)
                {
                    TreeNode*node=q.front();
                    q.pop();
                    //vector<int>row;
                    int index=flag?i:size-i-1;
                    row[index]=node->val;

                    if(root->left)
                    {
                        q.push(node->left);
                    }
                    if(root->right)
                    {
                        q.push(node->right);
                    }
                    
                }
                flag=!flag;

             ans.push_back(row);   
                
            }//

            while(!q.empty())
            {
                int size=q.size();
                vector<int> level;

                for(int i=0;i<size;i++)
                {
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL)
                {
                    q.push(root->left);
                }
                if(node->right!=NULL)
                {
                    q.push(root->right);
                }
                level.push_back(node->val);
                }
                flag=!flag;
                if(flag==0)
                {
                    reverse(level.begin(),level.end());
                }
                ans.push_back(level);
            }
        return ans;*/
          vector<vector<int>> ans;
        queue<TreeNode*>q;
       // vector<int>level;
        
        if(root==NULL)
            return ans;
            bool flag=false;
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
            flag=!flag;
            if(flag==false)
                reverse(level.begin(),level.end());
    
           ans.push_back(level); 
        }
      return ans;  
    }
};

107. Binary Tree Level Order Traversal II

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

111. Minimum Depth of Binary Tree

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
