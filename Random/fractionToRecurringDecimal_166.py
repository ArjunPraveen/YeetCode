# remainder starts repeating not quotient
class Solution:
    def fractionToDecimal(self, num: int, den: int) -> str:
        n = floor(abs(num)//abs(den))
        rem = abs(num)%abs(den)
        print(n)
        sign = '-' if num*den<0 else ''
        decimal  = [sign + str(n)]
        if rem ==0:
            return ''.join(decimal)
        decimal.append('.')
        check = {}
        while rem!=0:
            if rem in check:
                decimal.insert(check[rem], '(')
                decimal.append(')')
                break
            check[rem] = len(decimal)
            n = (rem*10)//abs(den)
            rem = (rem*10)%abs(den)
            decimal.append(str(n))
        print(check)
        return ''.join(decimal)
            
                