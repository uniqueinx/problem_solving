class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i = 0
        size = len(nums) 
        while i < size:
            if nums[i] == 0:
                del nums[i]
                nums.append(0)
                size -= 1
                i -= 1
            i += 1
