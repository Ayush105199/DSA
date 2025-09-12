/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {



        ListNode *p1=headA;
        ListNode *p2=headB;
        int cnt=0;
        while(true)
        {

            if(p1==p2)
            return p1;
            p1=p1->next;
            p2=p2->next;
            if(p1==nullptr){
            p1=headB;
            cnt++;
            }
            if(p2==nullptr)
            p2=headA;
            if(cnt>1)
            return nullptr;
        }


        
    }
};