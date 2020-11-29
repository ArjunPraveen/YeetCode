class Solution:
    def checkCentres(self, s, l, r):
        if l>r:
            return 0
        while (l>=0 and r<len(s) and s[l]==s[r]):
            l-=1
            r+=1
        print(str(l) + " " + str(r))
        return r-l-1
            
        
    def longestPalindrome(self, s: str) -> str:
        if s=="" or len(s)<2:
            return s
        start = 0
        end = 0
        for i in range(len(s)):
            l1 = self.checkCentres(s,i,i)
            l2 = self.checkCentres(s,i,i+1)
            length = max(l1,l2)
            print(str(l1) + str(l2))
            #print(str(start) + " "+str(end) + " " + str(length))
            if length > (end-start):
                #print(length)
                start = i - ((length-1)//2 )
                end = i + (length//2)
                
        print(" --- ")
        return s[start:end+1]
                
            
            
            
            
        
        
        
