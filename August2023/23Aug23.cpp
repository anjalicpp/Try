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
    
    bool symetery(TreeNode* p,TreeNode* q)
    {
       if(p==NULL||q==NULL)
       {
           return (p==q);
       }
        if(p->val!=q->val)return false;
        return (symetery(p->right,q->left)&&symetery(p->left,q->right));
    }
    bool isSymmetric(TreeNode* root) {
       
       return symetery(root->left,root->right);
    }
};
---------------------------------
589. N-ary Tree Preorder Traversal

Given the root of an n-ary tree, return the preorder traversal of its nodes' values.
Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value (See examples)
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;


    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
   // reverse(children.begin(),children.end());
   void preTrav(Node*root,vector<int>&ans)
    {
        if(!root)return;

    ans.push_back(root->val);
        for(auto i:root->children)
        {
           
            if(i)
            {
                preTrav(i,ans);
            }
        }
    }
    vector<int> preorder(Node* root) {
        //reverse(children.begin(),children.end());
        vector<int>ans;
        preTrav(root,ans);
        return ans;
    }
};
************************************
590. N-ary Tree Postorder Traversal

Given the root of an n-ary tree, return the postorder traversal of its nodes' values.
Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value (See examples)
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

   void postTrav(Node*root,vector<int>&ans)
    {
        if(root==NULL)return;

        for(auto i:root->children)
        {
            if(i)
            postTrav(i,ans);
    
        }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int>ans;
        postTrav(root,ans);
        return ans;
    }
};
    

 
--------------------------------
429. N-ary Tree Level Order Traversal

Given an n-ary tree, return the level order traversal of its nodes' values.
Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> ans;

    if(!root)return ans;

    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node*cur=root;
        int size=q.size();
        vector<int>row;
        for(int i=0;i<size;i++)
        {
            Node*cur=q.front();
            q.pop();
            row.push_back(cur->val);

            for(auto i:cur->children)
            {
                if(i)
                {
                    q.push(i);
                }
            }

        }
        ans.push_back(row);
    }

    return ans;  
    }
};

