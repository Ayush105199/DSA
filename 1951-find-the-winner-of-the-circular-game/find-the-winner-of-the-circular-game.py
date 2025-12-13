import numpy as np
class Solution:
#recursive method
    # def winner(self,n,k):
    #     if(n==1):
    #         return 0
    #     return (self.winner(n-1,k)+k)%n    
    # def findTheWinner(self, n: int, k: int) -> int:
    #     return self.winner(n,k)+1
    def winner(self,arr,n,index,person_left,k):
        if person_left==1:
            for i in range (0,n):
                if(arr[i]==0):
                    return i

        kill=(k-1)%person_left
        while kill > 0:
            index=(index+1)%n
            while(arr[index]==1):
                index=(index+1)%n
            kill-=1    
        arr[index]=1
        while(arr[index]==1):
            index=(index+1)%n
        return self.winner(arr,n,index,person_left-1,k)        



    def findTheWinner(self, n: int, k: int) -> int:
        arr = np.zeros(n, dtype=int)
        return self.winner(arr,n,0,n,k)+1
        