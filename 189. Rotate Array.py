class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        le=(len(nums)-k)%len(nums)
        nums[:]=nums[le:]+nums[:le]
        


       