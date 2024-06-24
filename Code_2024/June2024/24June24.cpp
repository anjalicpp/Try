3195. Find the Minimum Area to Cover All Ones I


class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int max_w=INT_MIN;int max_l=INT_MIN;
        int min_w=INT_MAX;int min_l=INT_MAX;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    max_w =max(max_w,j);
                    min_w=min(min_w,j);
                    max_l =max(max_l,i);
                    min_l=min(min_l,i);
                }
                 
            }
        }
        
        
        int l=max_l-min_l+1;
        int r=max_w-min_w+1;
        
        
        return(l*r);
    }
};
