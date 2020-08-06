
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int maximum=0;
        unordered_set<char> check;
        while(j<s.length())
        {
            if(!check.count(s[j]))
            {
                check.insert(s[j++]);
                maximum = check.size() > maximum ? check.size():maximum;
            }
            else
                check.erase(s[i++]);
        }
            
        return maximum;        
        
    }
};
