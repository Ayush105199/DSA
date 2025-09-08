# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if(head==None):
           return None 
        count=0
        curr=head
        while curr!=None:
            curr=curr.next
            count+=1
        if k>count:
            k=k%count
        if(count==1):
            return head
        if(count==k):
            return head
        if k==0:
            return head              

        p=count-k
        count=0
        curr=head
        while count < p-1:
            count+=1
            curr=curr.next
        temp=curr.next
        curr.next=None
        curr=temp
        while curr.next!=None:
            curr=curr.next
        curr.next=head
        return temp    


                

        