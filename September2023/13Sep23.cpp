73. Set Matrix Zeroes

Hint
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.class Solution {
public:
    void change(vector<vector<int>>& matrix,int n,int m,int i,int j)
    {
      for(int a=0;a<m;a++)
      {
        if(matrix[i][a]!=0)
        {
          matrix[i][a]=INT_MIN+2;
        }

        for(int b=0;b<n;b++)
        {
          if(matrix[b][j]!=0)
          {
            matrix[b][j]=INT_MIN+2;
          }
        }
      }
    }
    void setZeroes(vector<vector<int>>& matrix) {
      int n=matrix.size();
      int m=matrix[0].size();

       for(int i=0;i<matrix.size();i++)
       {
         for(int j=0;j<matrix[0].size();j++)
         {
           if(matrix[i][j]==0)
           {
             change(matrix,n,m,i,j);
           }
         }
       }
//changing the matrix
       for(int i=0;i<n;i++)
       {
         for(int j=0;j<m;j++)
         {
           if(matrix[i][j]==INT_MIN+2)
           {
             matrix[i][j]=0;
           }
         }
       }


    }
};
