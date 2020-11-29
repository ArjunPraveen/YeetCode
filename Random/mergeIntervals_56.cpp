class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n<=1)
            return intervals;
        sort(intervals.begin(), intervals.end(), compareInterval);
        for(int i=0; i<n; i++)
        {
            cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        }
        vector<vector<int>> ans;
        vector<int> cur = intervals[0];
        ans.push_back(cur);
        for(int i=0 ;i<n ;i++)
        {
            if(ans[ans.size()-1][1] >= intervals[i][0])
            {
                ans[ans.size()-1][1]  = ans[ans.size()-1][1]  > intervals[i][1] ? ans[ans.size()-1][1]  : intervals[i][1];
            }
            else
            {
                cur = intervals[i];
                ans.push_back(cur);
            }
        }
        return ans;
    }
    
    static bool compareInterval(vector<int> v1, vector<int> v2)
    {
        return v1[0] < v2[0];
    }
};
