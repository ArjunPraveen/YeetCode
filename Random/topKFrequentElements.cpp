class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        map<int,int> a;
        for(int i=0; i<n; i++)
        {
            if(a.count(nums[i]))
                a[nums[i]]++;
            else
                a[nums[i]]=1;
        }
        
        //for (const auto &[k, v] : a)
        //    cout<<k<<" "<<v<<endl;
        
        vector<pair<int, int> > check;
        for (auto& it : a)
            check.push_back(it); 

        
        sort(check.begin(), check.end(), cmp ); 
        for(int i=0; i<k; i++)
        {
            ans.push_back(check[i].first);
        }
        return ans;
    }
    
    static bool cmp(pair<int,int> &x, pair<int,int> &y)
    {
        return x.second > y.second;
    }
};
