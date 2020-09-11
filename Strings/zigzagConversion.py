class Solution:
    def convert(self, s: str, n: int) -> str:
        if n==0 or n==1 or len(s)==0:
            return s
        rows= {}
        for i in range(n):
            rows[i] = ""
        down = 1
        count = 0
        for i in s:
            rows[count] += i
            if down==1:
                count+=1
                if count==n:
                    down=0
                    count=n-2
            else:
                count-=1
                if count==-1:
                    down=1
                    count=1
        return ''.join(x for x in rows.values())
                    
                
            
            
