class Solution {
    
/*

2 3 4 7 11  (5)   ->9
1 2 3 4     (2)   ->6
1 3 4 5     (3)   ->7

*/
public:
    int findKthPositive(vector<int>& a, int k) {
        int ans = 0;
        int i=0,j=0;
        int cur=1;
        while(i<k)
        {
            if(j>=a.size())
            {
                ans = (cur + (k-i) -1);
                break;
            }
            if(cur==a[j])
            {
                cur++;
                j++;
            }
            else if(cur<a[j])
            {
                ans=cur;
                cur++;
                i++;
            }
        }
        return ans;
    }
};
