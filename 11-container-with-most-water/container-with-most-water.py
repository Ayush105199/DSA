import math
class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        n=len(height)
        l=0
        r=n-1
        i=0
        area=-1

        while(l<r):
            h=min(height[l],height[r])
            ind=r-l
            area1=h*ind
            area=max(area1,area)
            if height[l]<height[r]:
                l+=1
            else:
                r-=1    

        return area    
        