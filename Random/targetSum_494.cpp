class Solution {
private:
    int ans=0;
    int n;
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        n = nums.size();
        int sum=0;
        for(int i=0 ; i<n; i++)
        {
            sum+=nums[i];
        }
        if(S>sum)
            return 0;
        
        countSum(nums, S, 0,  0);
        return ans;
    }
    
    void countSum(vector<int> &nums, int currentSum, int S, int count)
    {
        if(count == n)
        {
            if(currentSum==S)
                ans++;
            return;
        }
        countSum(nums, currentSum + nums[count], S, count+1);
        countSum(nums, currentSum - nums[count], S, count+1);
    }
    
    
};
