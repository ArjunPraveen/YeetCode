class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int ans=0;
        int m = grid.size();
        int n = grid[0].size();
        unordered_set<int> check;
        
        for(int i=m-1; i>=0; i--)
        {
            
            for(int j=n-1; j>=0; j--)
            {
                if(!check.count(j))
                {
                    if(grid[i][j]>0)
                    {
                        for(int k=j; k>=0; k--)
                            check.insert(k);
                        break;
                    }
                    if(grid[i][j]<0)
                        ans++;
                }
            }
        }
        return ans;
        
    }
};
