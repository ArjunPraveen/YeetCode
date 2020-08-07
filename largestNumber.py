class Solution:
    # [3 323 34 7 9] -> 97343323
    def largestNumber(self, nums: List[int]) -> str:
        n = len(nums)
        for i in range(n):
            for j in range(n-i-1):
                if int(str(nums[j]) + str(nums[j+1])) > int(str(nums[j+1]) + str(nums[j])):
                    t = nums[j]
                    nums[j] = nums[j+1]
                    nums[j+1] = t
        print(nums)
        num = "".join(str(x) for x in nums[::-1])
        num = int(num)
        print(num)
        return str(num)
