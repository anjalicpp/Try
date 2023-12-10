867. Transpose Matrix

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int m=matrix[0].size();
//First Approach
   /* vector<vector<int>>ans(m,vector<int>(n,0));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans[j][i]=matrix[i][j];
        }
    }

    return ans;*/
//Second Approach
    vector<vector<int>>ans;

    for(int i=0;i<m;i++)
    {
        vector<int>temp;
        for(int j=0;j<n;j++)
        {
            temp.push_back(matrix[j][i]);
        }
        ans.push_back(temp);
    }
    return ans;
    }
};
