class Solution {
public:
    
    bool valid(vector<vector<char>>& board,int row,int col,char c)
    {
        for(int i=0;i<9;i++)
        {
            //row wise check
            if(board[row][i]==c) return false;
            
            //column wise check
            if(board[i][col]==c)return false;
            
            //square check
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
                return false;
        
            
        }
        return true;
    }
    
    bool solve(vector<vector<char>>& board)
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                
                if(board[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(valid(board,i,j,c))
                        {
                            board[i][j]=c;
                            if(solve(board)==true)
                                return true;
                            else board[i][j]='.';//false condotion me backtracking kro
                        }
                    }
             return false;//if no blanckspace in iteration return false no further recursion  
                }
            }
        }
        return true;//if loop doesnot execute means it is filled
    }
    
    void solveSudoku(vector<vector<char>>& board) {
     solve(board);
        
    }
};
