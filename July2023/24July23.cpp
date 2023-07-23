200. Number of Islands

class Solution {
public:
     void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>grid){
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;

        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            // traversing the neighbours of {row,col}.
            for(int delrow=-1;delrow<=1;delrow++){
                for(int delcol=-1;delcol<=1;delcol++){
                    if(abs(delrow)+abs(delcol)==2)continue; //continue for diagonal neighbours
                    int nrow=row+delrow;
                    int ncol=col+delcol;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] &&
                     grid[nrow][ncol]=='1'){
                            vis[nrow][ncol]=1;
                            q.push({nrow,ncol});
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
      int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    bfs(i,j,vis,grid);
                    ans++;
                }
            }
        }
        return ans;   
    }
};
