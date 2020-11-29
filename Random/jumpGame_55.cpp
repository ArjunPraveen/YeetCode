class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max=nums[0];
        if(nums.size()==1)
            return true;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(i<=max && (i+nums[i]>=nums.size()-1))
                return true;
            if(i>max)
                return false;
            max = i+nums[i] > max ? i+nums[i] : max;
            
        }
        return false;
    }
};
