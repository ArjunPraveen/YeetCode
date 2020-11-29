class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        if(nums.size()<0)
            return ans;
        if(nums.size()==2)
        {
            if(nums[0]+nums[1]==target)
            {
                ans.push_back(0);
                ans.push_back(1);
            }

            return ans;
        }
        unordered_map<int,int> check;
        int num;
        for(int i=0; i<nums.size(); i++)
        {
            num = target-nums[i];
            if(check.count(num))
            {
                ans.push_back(i);
                ans.push_back(check[num]);
                break;
            }
            check[nums[i]] = i;
            
        }
        
        return ans;
        
    }
};
