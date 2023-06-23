# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        if n==1:
            return 1
        began=1
        end=n
        result=n
        while began<=end:
            mid=(end+began)//2
            if isBadVersion(mid):
                end=mid-1
                result=mid
            else:
                began= mid+1
        return result