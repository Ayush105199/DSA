class Solution:
    def sumZero(self, n: int) -> List[int]:
        if(n==1):
            return [0]
        a=[]
        b=-int((n/2))
        if n%2==0:
            for i in range (1,n+2):
                if b==0:
                    b+=1
                    continue
                a.append(b)
                b+=1
            
        else:
            for i in range (1,n+1):
                a.append(b)
                b+=1
        return a    

        