class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int r = obstacleGrid.size();
        int c = obstacleGrid[0].size();
        
        int a[r][c];
        int i=0;
        while(!obstacleGrid[i][0])
        {
            a[i][0] = 1;
            i++;
            if(i==r)
                break;
        }
        for(int m=i; m<r; m++)
        {
            a[m][0] =0;
        }
        
        int j=0;
        while(obstacleGrid[0][j]!=1)
        {
            a[0][j] = 1;
            j++;
            if(j==c)
                break;
        }
        for(int m=j; m<c; m++)
        {
            a[0][m] =0;
        }
        
        for(i=1; i<r; i++)
        {
            for(j=1; j<c; j++)
            {
                if(obstacleGrid[i][j]==1)
                {
                    a[i][j]=0;
                    continue;
                }
                a[i][j] = a[i-1][j] + a[i][j-1];
            }
        }
        return a[r-1][c-1];
    }
    
    
};
