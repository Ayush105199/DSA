import math
class Solution(object):
    def areaOfMaxDiagonal(self, dimensions):
        """
        :type dimensions: List[List[int]]
        :rtype: int
        """
        maxi=0
        maxiarea=0
        n=len(dimensions)
        for i in range(0,n):
            r=dimensions[i][0]
            q=dimensions[i][1]
            p=r*r+q*q
            p=math.sqrt(p)
            if(p > maxi) or (p==maxi and r*q>maxiarea):
                maxi=p
                maxiarea=r*q
        return maxiarea