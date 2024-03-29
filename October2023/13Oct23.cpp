//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution{

public:

    void floorinbst(Node*root,int x,int&ans)
    {
        if(root==NULL) return;
        
        if(root->data==x)
        {
            ans=x;
            return;
        }
        
       else if(root->data>x)
        floorinbst(root->left,x,ans);
        
        else
        {
            ans=max(ans,root->data);
            floorinbst(root->right,x,ans);
        }
    }
    int floor(Node* root, int x) {
        // Code here
        int ans=-1;
        if(root==NULL)return -1;
        
        floorinbst(root,x,ans);
        return ans;
    }
};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    }
}

// } Driver Code Ends
class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j;
        for(j=0;j<s.size();j++)
        {
            if(s[j]==' ')
            {
                reverse(s.begin()+i,s.begin()+j);
                i=j+1;
            }
        }
        reverse(s.begin()+i,s.end());
        return s;
        
    }
};
