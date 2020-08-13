class Solution:
    def numOfBurgers(self, t: int, c: int) -> List[int]:
        if t<c or t%2!=0:
            return []
        if t==0 and c==0:
            return [0,0]
        val = t-2*c
        if (val)%2==0 and val>=0 and c-val/2>=0:
            return [int(val/2),int(c-val/2)]

        return []
"""    
        TLE logic
        for i in range(c//2+1):
            if 4*i + 2*(c-i) == t:
                return [i,c-i]
            
            if 4*(c-i)+ 2*i == t:
                return [c-i,i]
"""
