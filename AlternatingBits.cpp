class Solution {
public:
    bool hasAlternatingBits(int n) {
        int one=0, zero=0, check=0;
        if(n==0 or n==1)
            return true;
        while(n!=0)
        {
            check = n&1;
            if(check==1)
            {
                if(one==1)
                    return false;
                one=1;
                zero=0;
            }
            else
            {
                if(zero==1)
                    return false;
                zero=1;
                one=0;
            }
            
            n = n>>1;
        }
            
            
        return true;
    }
};




