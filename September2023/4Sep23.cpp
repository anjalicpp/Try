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
