import math
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        for i in range(len(nums)):
            nums[i]=abs(nums[i]*nums[i])
        nums.sort()
        return nums

