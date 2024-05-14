class Solution {
public:
    int search_value(vector<vector<int>>& grid,int row,int col)
    {
        int maxi=0;
        for(int i=row;i<row+3;i++)
        {
            for(int j=col;j<col+3;j++)
            {
                maxi=max(maxi,grid[i][j]);
            }
        }
        return maxi;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int m=grid[0].size();
        int n=grid.size();

       vector<vector<int>>ans;

       for(int i=0;i<=n-3;i++)
       {
        vector<int>temp;
        for(int j=0;j<=m-3;j++)
        {
            int num=search_value(grid,i,j);
            temp.push_back(num);
        }

        ans.push_back(temp);
       } 
    return ans;    
    }
};
