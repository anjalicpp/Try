130. Surrounded Regions

Given an m x n matrix board containing 'X' and 'O', capture all regions that are 4-directionally surrounded by 'X'.
A region is captured by flipping all 'O's into 'X's in that surrounded region.

 

class Solution {
public:

void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>board,int delrow[],int delcol[])
{
    vis[row][col]=1;
    int n=board.size();
    int m=board[0].size();

    for(int i=0;i<4;i++)
    {
        int nrow=row+delrow[i];
        int ncol=col+delcol[i];
        if(nrow>=0 && nrow<n &&ncol>=0 && ncol<m && !vis[nrow][ncol] && board[nrow][ncol]=='O')
        {
            dfs(nrow,ncol,vis,board,delrow,delcol);
        }
    }
}
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
         int delrow[]={-1,0,+1,0};
         int delcol[]={0,1,0,-1};
         vector<vector<int>>vis(n,vector<int>(m,0));

        //first row and last row
         for(int i=0;i<m;i++)
         {
             if(board[0][i]=='O'&& !vis[0][i])
             {
                dfs(0,i,vis,board,delrow,delcol);
             }

              if(board[n-1][i]=='O'&&!vis[n-1][i])
             {
                dfs(n-1,i,vis,board,delrow,delcol);
             }
         }

         //first col and last col
          for(int j=0;j<n;j++)
         {
             if(board[j][0]=='O'&& !vis[j][0])
             {
                dfs(j,0,vis,board,delrow,delcol);
             }

              if(board[j][m-1]=='O'&& !vis[j][m-1])
             {
                dfs(j,m-1,vis,board,delrow,delcol);
             }
         }


         for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 if(board[i][j]=='O'&& !vis[i][j])
                 board[i][j]='X';
             }
         }

    }
};
