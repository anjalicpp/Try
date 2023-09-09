class Solution {
public:
    
    bool check(vector<vector<char>>& board,int row ,int col,char c)
    {
        for(int i=0;i<9;i++)
        { if(board[row][i]==c&&i!=col) return false;
         
         if(board[i][col]==c&&i!=row) return false;
         
         if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c&&((3*(row/3)+i/3)!=row&&(3*(col/3)+i%3)!=col))return false;
         
         }
       return true; 
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]!='.')
                {
                    if(check(board,i,j,board[i][j]))continue;
                   else return false; 
                }
                
            }
        }
    return true;
    }
};
