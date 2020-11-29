class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans,check;
        check.push_back(0);
        check.push_back(1);
        check.push_back(1);
        check.push_back(2);
        int mul=4;
        
        if(num>3)
        {
            for(int i=4; i<=num; i++)
            {
                if(i == 2*mul)
                    mul=mul<<1;
                check.push_back(1 + check[i%mul]);
                
            }
        }
        
        for(int i=0; i<=num; i++)
            ans.push_back(check[i]);
        return ans;
    }
    
};
