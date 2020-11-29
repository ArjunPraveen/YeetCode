class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        if(m==0)
            return n%2==1 ? nums2[n/2] : ((double)nums2[n/2 -1] + (double)nums2[n/2])/2;
    
        if(n==0)
            return m%2==1 ? nums1[m/2] : ((double)nums1[m/2 -1] + (double)nums1[m/2])/2;
    
        int loop = (m+n)/2;
        vector<int> a;
        int first =0, second = 0;
        for(int i=0; i<=loop; i++)
        {
            if(first<m && second<n){
                
                if(nums1[first]<nums2[second])
                    a.push_back(nums1[first++]);

                else
                    a.push_back(nums2[second++]);

            }else{
                if(first<m)
                {
                    while(i++<=loop)
                        a.push_back(nums1[first++]);
                    break;
                }
                else
                {
                    while(i++<=loop)
                        a.push_back(nums2[second++]);
                    break;
                }
            }

        }
        if((m+n)%2==1)
            return a[a.size()-1];
        else
            return ((double)a[a.size()-1] + (double)a[a.size()-2])/2;
        
        
        
    }
};
