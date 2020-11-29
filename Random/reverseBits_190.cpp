class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        //cout<<((n&1)<<31)<<endl;
        int pow=31;
        while(n!=0)
        {
            ans += (n&1)<<pow;
            n = n>>1;
            pow-=1;
        }
        
        
        return ans;
    }
};
