# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        total=0
        c=0 
        curr3=ListNode(0)
        head=curr3
        while l1!=None or l2!=None:
            total=c
            c=0
            if(l1!=None):
                total+=l1.val
                l1=l1.next
            if(l2!=None):
                total+=l2.val
                l2=l2.next
            if(total>9):
                total=total-10
                c=1
            curr=ListNode(total)
            curr3.next=curr
            curr3=curr3.next
        if(c>0):
            curr=ListNode(c)
            curr3.next=curr
            curr3=curr3.next

        return head.next
