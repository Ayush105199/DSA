/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int>m;
        if(head==nullptr)
        return head;
        
        ListNode * curr=head;
        while(curr!=nullptr)
        {
            m[curr->val]++;
            curr=curr->next;
        }
        ListNode dummy(0);
        ListNode *prev=&dummy;
        curr=head;
        while(curr!=nullptr)
        {
            if(m[curr->val]==1)
            {
                prev->next=curr;
                prev=curr;
            }
            curr=curr->next;
        }
        prev->next=nullptr;
        return dummy.next;
    }
};