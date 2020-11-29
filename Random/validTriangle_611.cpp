class Solution {
//1 2 3 4 5 6 7
public:
    int triangleNumber(vector<int>& nums) {
    
        int ans=0;
        sort(nums.begin(), nums.end());
        int n = nums.size(), k;
        for(int i=0; i<n-2; i++)
        {
            if(nums[i]!=0)
            {
                for(int j=i+1; j<n-1; j++)
                {
                    k = j+1;
                    while( k<n && (nums[k]< nums[i] + nums[j]))
                        k++;
                    
                    ans += (k-j-1);

                }
            }
        }
        
        return ans;
    }
};
