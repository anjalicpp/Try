Given a Binary Search Tree, modify the given BST such that it is balanced and has minimum possible height. Return the balanced BST

void inorder(Node* root,vector<int>&nodes){
        if(root==NULL)return;
        inorder(root->left,nodes);
        nodes.push_back(root->data);
        inorder(root->right,nodes);
    }
    Node *createhbst(int left,int right,vector<int>&inorder){
        if(left>right)return NULL;
        int mid=(left+right)/2;
        Node* newroot=new struct Node(inorder[mid]);
        newroot->left=createhbst(left,mid-1,inorder);
        newroot->right=createhbst(mid+1,right,inorder);
        return newroot;
    }

.......................................................................

        class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        int j=0;
     for(int i=0;i<m&&j<n;i++)
     {
         if(s[j]==t[i])
         {
             j++;
         }
     }  
     return (j==n); 
    }
};
