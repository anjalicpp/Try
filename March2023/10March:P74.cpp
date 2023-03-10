74. Search a 2D Matrix
Medium

class Solution {
public:
      bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0,j=n-1;
        
        while((i>=0&&i<m)&&(j>=0&&j<n))
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
            else if(matrix[i][j]>target)
            {
                j--;
            }
            else i++;
        }
        return false;
    }
};
