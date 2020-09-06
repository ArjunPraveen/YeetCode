class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int ans=0;
        for(int i=0; i<nums.size(); i++)
            ans^=nums[i];
        return ans;
    }
};
