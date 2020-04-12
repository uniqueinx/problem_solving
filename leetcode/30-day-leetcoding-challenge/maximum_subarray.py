class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        mx = nums[0]
        oldmx = nums[0]
        for i in nums[1:]:
            if i > mx + i:
                oldmx = max(oldmx, mx)
                mx = i
            elif mx + i > mx:
                mx += i
            else:
                oldmx = max(mx, oldmx)
                mx += i
        return max(mx, oldmx)
