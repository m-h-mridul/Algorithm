class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        begin=0
        end=len(nums)
        if nums[end-1]<target :
            return end
        elif target <nums[0]:
            return 0

        while begin<end:
            cheak=(begin+end)//2
            if nums[cheak]==target:
                return cheak
            elif nums[cheak]>target and nums[cheak-1]<target:
                return cheak
            elif nums[cheak]>target :
                end=cheak
            else:
                begin=cheak+1
              