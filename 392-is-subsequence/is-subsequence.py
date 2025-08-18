class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        l=0
        p=0

        n=len(s)
        if n==0:
            return True
        m=len(t)
        while(p<m):
            if(s[l]==t[p]):
                l+=1
                p+=1
            else:
                p+=1 
            if l==n:
                return True       
        return False