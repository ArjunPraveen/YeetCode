class Solution {
private:
    int x,y;
    int p,q;
    int r,c;
    int n;
    int paths=0;
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        r  = grid.size();
        c = grid[0].size();
        n = r*c;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(grid[i][j]==1)
                {
                    x=i;
                    y=j;
                }
                else if(grid[i][j]==2)
                {
                    p=i;
                    q=j;
                }
                else if(grid[i][j] == -1)
                {
                    n--;
                }
                
            }
        }    
        dfs(grid,x,y,1);
        return paths;
        
    }
    
    void dfs(vector<vector<int>> grid, int i, int j, int path)
    {
        if(i<0 || i>=r || j<0 || j>=c || grid[i][j]==-1 )
            return;
        if(i==p && j==q && path==n)
        {
            paths++;
            return;
        }
        grid[i][j]=-1;
        dfs(grid, i,j+1, path+1);
        dfs(grid, i+1, j, path+1);
        dfs(grid, i,j-1, path+1);
        dfs(grid, i-1, j, path+1);
         
            
            
    }
    
    
};
