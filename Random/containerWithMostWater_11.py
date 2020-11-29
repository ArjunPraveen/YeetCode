class Solution:
    def maxArea(self, height: List[int]) -> int:
        n = len(height)
        i=0
        j=n-1
        maxVol = 0

        while i<j:
            maxVol = max(maxVol, (j-i)*min(height[i], height[j]) )
            if height[i] < height[j]:
                i+=1
            else:
                j-=1
        return maxVol
          
            

"""
TLE logic
        for i in range(n):
            for j in range(i+1,n):
                l = height[i] if height[i]<height[j] else height[j]
                if (j-i)*l > max:
                    print(str(i) + " " + str(j))
                    max = (j-i)*l

"""
