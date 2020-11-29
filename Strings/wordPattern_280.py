class Solution:
    def wordPattern(self, pattern: str, str: str) -> bool:
        print(str)
        words = str.split()
        check = {}
        k=0
        if str=="" or pattern=="":
            return False
        if len(pattern) != len(words):
            return False
        for i in words:
            if i in check:
                if pattern[k] != check[i]:
                    return False
            else:
                if pattern[k] in check.values():
                    return False
                check[i] = pattern[k]
            print(check)
            k+=1
        return True
        
