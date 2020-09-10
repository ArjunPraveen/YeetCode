class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0, loop=0;
        uint32_t mask = 1,check=0;
        while(loop!=32)
        {
            check= (n&mask);
            check = check>>(loop++);
            if(check)
                ans++;
            //loop++;
            mask = mask<<1;
        }
        return ans;
    }
};
