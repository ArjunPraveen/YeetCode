using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int k =1;
        for(auto i : board)
        {
            unordered_set<char> row;
            for(auto j: i)
            {
                cout<<j<<" ";
                if(j=='.')
                    continue;
                if (row.count(j))
                {
                    return false;
                }
                else
                {
                    row.insert(j);
                }
            }
            cout<<endl;

            
        }
        
        cout<<endl;
        
        for(int i=0; i<9; i++)
        {
            unordered_set<char> col;
            for(int j=0; j<9; j++)
            {
                cout<<board[j][i]<<" ";
                char a = board[j][i];
                if(a=='.')
                    continue;
                if (col.count(a))
                {
                    return false;
                }
                else
                {
                    col.insert(a);
                }
            }
            cout<<endl;
            
        }
        
        for(int m=0; m<3; m++)
        {
            for(int k=0; k<3; k++)
            {
                unordered_set<char> box;
                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                    {
                        cout<<board[m*3 + i][k*3 + j]<<" ";
                        char a =board[m*3 + i][k*3 + j];
                        if(a=='.')
                            continue;
                        if (box.count(a))
                        {
                            return false;
                        }
                        else
                        {
                            box.insert(a);
                        }
                            }
                            cout<<endl;
                }
            }
            cout<<endl;
        }
        return true;
    }
};
