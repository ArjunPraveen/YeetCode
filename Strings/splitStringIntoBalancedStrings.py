class Solution:
    def balancedStringSplit(self, s: str) -> int:
        print(len(s))
        R=0
        L=0
        ans=0
        for i in s:
            if i =='R':
                R+=1
            if i =='L':
                L+=1
            if R==L:
                ans+=1
                R=0
                L=0
        return ans
                
            
