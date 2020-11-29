class Solution:
    def validPalindrome(self, s: str) -> bool:
        n = len(s)-1
        
        for i in range(len(s)//2):
            if(s[i]!=s[n-i]):
                if i==0:
                    return s[i+1:n-i+1] == s[n-i:i:-1] or s[i:n-i] == s[n-i-1::-1]
                return s[i+1:n-i+1] == s[n-i:i:-1] or s[i:n-i] == s[n-i-1:i-1:-1]
        return True
        
        
        
        #Brute force
        # c=-1
        # return s == s[::-1]
        #    
        # for i in s:
        #     c+=1
        #     k= s[0:c] + s[c+1:]
        #     return k == k[::-1]
        #        
        # return False
            
