
class Solution {
public:
    int reverse(int x) {
        int d,ans=0;
        while(x!=0)
        {
            d = x%10;
            x/=10;
            if((ans >= INT_MAX/10 + d) || (ans<= INT_MIN/10 + d))
                return 0;
            ans = ans*10 + d;
           
        }
        return ans;
    }
};
