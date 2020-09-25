class Solution(object):
    def max_height_index(self,height, l,r):
        check=l
        for i in range(l+1,r):
            if height[i] > height[check]:
                check = i
        return check
        
    def trap(self, height):

        ans = 0
        n = len(height)
        min_pointer = 0
        max_pointer = self.max_height_index(height,0,n)
        for i in range(1,n):
            if height[i] > height[max_pointer]:
                max_pointer = i
        for i in range(n) : 
            if height[i] > height[min_pointer]:
                min_pointer = i
                l_max_height  = height[i]
            else :
                l_max_height = height[min_pointer]
            
            if max_pointer >= i:
                r_max_height = height[max_pointer]
            else : 
                max_pointer = self.max_height_index(height,i,n)
                r_max_height = height[max_pointer]
                
            h = min(l_max_height, r_max_height)

            ans = ans + (h-height[i])

        return ans        
        
        
        
        
'''    
        TLE logic 
        finding max for left and right was the issue
        for i in range(len(height)) : 
            l_max_height = max(height[0:i+1])
            r_max_height = max(height[i:])
            h = min(l_max_height, r_max_height)

            ans = ans + (h-height[i])

        return ans
        
'''
