class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int sum= grid[0][0];
        int dp[m][n];
        dp[0][0] = grid[0][0];
        for(int i=1; i<m; i++)
        {
            sum += grid[i][0];
            dp[i][0] = sum;
        }
        sum = grid[0][0];
        for(int i=1; i<n ;i++)
        {
            sum += grid[0][i];
            dp[0][i] = sum;
        }
        
        for(int i=1; i<m; i++)
        {
            for(int j=1; j<n; j++)
            {
                dp[i][j] = grid[i][j] + (dp[i-1][j]<dp[i][j-1] ? dp[i-1][j] : dp[i][j-1]);
            }
        }
        return dp[m-1][n-1];
    }
};
