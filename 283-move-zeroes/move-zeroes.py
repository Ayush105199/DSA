class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        l=0
        p=0
    
        for i in range(0,n):
            
            if(nums[i]!=0):
                nums[l], nums[i] = nums[i], nums[l]
                l+=1

