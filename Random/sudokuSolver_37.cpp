class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(0,0,board);
        // for(int i=0; i<board.size(); i++)
        // {
        //     for(int j=0; j<board[0].size(); j++)
        //     {
        //         cout<<board[i][j]
        //     }
        // }
    }
    
    bool solve(int row, int col, vector<vector<char>>& board)
    {
        if(col == board[0].size())
        {
            col = 0;
            row = row+1;
            if(row == board.size())
            {
                return true;
            }
        }
        if(board[row][col]!= '.')
        {
            return solve(row,col+1, board);
        }
        
        for(int i=1; i<=board.size(); i++)
        {
            char c = '0' + i;
            if(check(row,col,c,board))
            {
                board[row][col] = c;
                if(solve(row,col+1,board))
                {
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }
    
    
    bool check(int row, int col, char c, vector<vector<char>> &board )
    {
        for(int i=0; i<board.size(); i++)
        {
            if(c == board[row][i] || c == board[i][col])
                return false;
                
        }
        
        int grid = sqrt(board.size());
        for(int i=(row/grid)*3; i<(row/grid)*3 +3; i++)
        {
            for(int j=(col/grid)*3; j<(col/grid)*3 + 3; j++)
            {
                if(c == board[i][j])
                    return false;
            }
        }
        
        return true;
    }
};
