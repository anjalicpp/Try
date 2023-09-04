#include <bits/stdc++.h> 

/*void changes(vector<vector<int>>&matrix,int i,int j,int n,int m)
{
  for (int a = 0; a <m; a++)
  {
	if(matrix[i][a]!=0)
	matrix[i][a] = -1;

  }

	for(int b=0;b<n;b++)
	{
		if(matrix[b][j]!=0)
		matrix[b][j]=-1;
	}
	
}
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==0)
			{
				changes(matrix,i,j,n,m);
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==-1)
			{
				matrix[i][j]=0;
			}
		}
	}
	return matrix;
}*/
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

	int row[m]={0};
	int col[n]={0};

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==0)
			{
				row[j]=1;
				col[i]=1;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(row[j]==1||col[i]==1)
			{
				matrix[i][j]=0;
			}
		}
	}

	return matrix;
}
-------------------
	 map<int,int>m;
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        for(int i=0;i<in.size();i++)m[in[i]]=i;
        TreeNode* root = build(in,0,in.size()-1,post,0,post.size()-1);
        return root;
    }
    TreeNode* build(vector<int>&in, int inS,int inE,vector<int>&post,int postS,int postE){
        if(inS>inE || postS>postE)return NULL;
        TreeNode* root = new TreeNode(post[postE]);
        int index = m[post[postE]];
        int len = inE - index;   
        root->right = build(in,index+1,inE,post,postE-len,postE-1);
        root->left = build(in,inS,index-1,post,postS,postE-len-1);
        return root;
    }
};
