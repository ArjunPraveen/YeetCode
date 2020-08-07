class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if s=="":
            return True
        check ={}
        for i in range(len(s)):
            if s[i] in check:
                if check[s[i]] != t[i]:
                    return False
            else:
                if t[i] in check.values():
                    return False
                check[s[i]] = t[i]
        return True
        
