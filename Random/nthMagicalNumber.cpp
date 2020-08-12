# define ll long long int
class Solution {

public:
    ll mod = 1000000007;
    ll gcd(ll a, ll b)
    {
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
    

    int nthMagicalNumber(int N, int A, int B) {
        // N= [output/B] + [output/A] - [output/lcm(A,B)]
        
        
        ll low=1,mid,t;
        ll high = 1e17;
        ll lcm = A*B/gcd(A,B);
        
        while(low<high)
        {
            mid = (low + high)/2;
            t = (mid/A) + (mid/B) - (mid/lcm);
            if (t <N)
                low = mid+1;
            else
                high = mid;
        }
        
         return high%mod;
    }
};
