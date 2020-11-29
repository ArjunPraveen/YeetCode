class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter=0;
        int cur=0; 
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                
                
                if(grid[i][j]==1){
                    // cout<<grid[i][j]<<" ";
                    cur = 4;
                    if(j+1<grid[i].size() )
                        cur-=grid[i][j+1];
                    if(i-1>=0)
                        cur-=grid[i-1][j];
                    if(j-1>=0 )
                        cur-=grid[i][j-1];
                    if(i+1<grid.size() )
                        cur-=grid[i+1][j];
                    perimeter+=cur;
                }
            }
        }
        return perimeter;
    }
};
