1582. Special Positions in a Binary Matrix

class Solution {
public:
//Brute Force
void fun(vector<vector<int>>& mat,int row,int col,int &ans,int n,int m)
{
    int flag=0;
    for(int i=0;i<m;i++)
    {
        if(i!=col)
        {
            if(mat[row][i]!=0)
            {
                flag=1;
                return;
            }
        }

     for(int i=0;i<n;i++)
    {
        if(i!=row)
        {
            if(mat[i][col]!=0)
            {
                flag=1;
                return;
            }
        }
    
    }
    }
    ans++;

}
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int ans=0;

      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              if(mat[i][j]==1)
              {
                  fun(mat,i,j,ans,n,m);
              }
          }
      } 
      return ans; 
    }

    //BETTER APPROACH
    // if a 1 is special its only one appearing in one place rest row and col are 0
    //so each row sum and col sum should be zero i,e if 1 in first row is special that col and row has sum only 1 since only one occured once


};
