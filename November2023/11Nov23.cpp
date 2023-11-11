class Solution {
public:
    
    bool check(vector<vector<int>>& matrix,int row,int col,int num,int size)
    {
        for(int i=0;i<size;i++)
        {
            if(matrix[row][i]==num&&i!=col)return false;
            if(matrix[i][col]==num&&i!=row)return false;   
            
        }
       return true; 
    }
    bool checkValid(vector<vector<int>>& matrix) {
       int size=matrix[0].size();
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                
                
                    if(check(matrix,i,j,matrix[i][j],size))continue;
                    else return false;
                
            }
        }
        return true;
}    
};
