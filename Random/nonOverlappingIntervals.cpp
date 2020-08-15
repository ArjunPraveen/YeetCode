class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.size()<2)
            return 0;
        sort(intervals.begin(), intervals.end(), compare);
        int n = intervals.size();
        int ans=0;
        int end = intervals[0][1];
        for(int i=1; i<n; i++)
        {
            if(intervals[i][0] >= end)
                end = intervals[i][1];

            else
                ans++;
        }
        
        return ans;
    }
    static bool compare(vector<int> v1, vector<int> v2)
    {
        return v1[1] < v2[1];
    }
};
