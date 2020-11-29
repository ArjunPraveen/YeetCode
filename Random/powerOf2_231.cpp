class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ones=0, check=0;
        if(n==0)
            return false;
        while(n!=0)
        {
            check = n&1;
            if(check)
                ones++;
            n=n>>1;
            if(ones>1)
                return false;
        }
        return true;
    }
};


