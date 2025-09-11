# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# class Solution:
#     def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
#         l=0
#         curr=head
#         while(curr!=None):
#             curr=curr.next
#             l+=1
#         if n==1:
#             return head.next

#         curr=head    
#         p=l-n
#         l=0
#         while l<(p-1):
#             curr=curr.next
#             l+=1
#         if curr.next:
#             curr.next = curr.next.next
#         return head     
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
      
        l = 0
        curr = head
        while curr:
            curr = curr.next
            l += 1

       
        if n == l:
            return head.next

       
        curr = head
        p = l - n
        for _ in range(p - 1):
            curr = curr.next

        
        if curr.next:
            curr.next = curr.next.next

        return head

           

