class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        # nums.sort()
        n=len(nums)
        l=0
        r=n-1
        seen={}
        for i,num in enumerate(nums):
            diff=target-num
            if(diff in seen):
                return [seen[diff],i]
            seen[num]=i    
