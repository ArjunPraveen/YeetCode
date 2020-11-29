class Solution:
    def isPalindrome(self, s: str) -> bool:
        print(s)
        c=0
        final = ""
        a = ""
        for i in s:
            if (not(i.isalpha()) and not(i.isnumeric())):
                
                final+=a
                a = ""
            else:
                if i.isalpha():
                    a+=i.lower()
                else:
                    a+=i
        final+=a
        return final==final[::-1]
