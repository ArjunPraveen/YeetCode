class Solution {
private:
    int max=0;
    int cur=0;
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++)
            {
                cur=0;
                if(grid[i][j])
                {
                    bfs(grid,i,j);
                    max = cur>max?cur:max;
                }

            }
        }
        return max;
    }
    
    void bfs(vector<vector<int>> &grid, int i, int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]==0)
            return;
        else
            cur+=1;
        grid[i][j]=0;
        bfs(grid,i+1,j);
        bfs(grid,i-1,j);
        bfs(grid,i,j+1);
        bfs(grid,i,j-1);
        
    }
};
