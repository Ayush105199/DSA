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
ListNode * mergetwosortedLists(ListNode *l1,ListNode*l2)
{
    if(l1==nullptr)
    return l2;
    if(l2==nullptr)
    return l1;
    if(l1->val <=l2->val)
    {
        l1->next=mergetwosortedLists(l1->next,l2);
        return l1;
    }
    else{
        l2->next=mergetwosortedLists(l1,l2->next);
        return l2;
    }
    return nullptr;
}
ListNode * partitionandmerge(int start,int end,vector<ListNode*>&Lists)
{
    if(start>end)
    return nullptr;
    if(start==end)
    return Lists[start];
    int mid=start+(end-start)/2;
    ListNode*l1=partitionandmerge(start,mid,Lists);
    ListNode*l2=partitionandmerge(mid+1,end,Lists);
    return mergetwosortedLists(l1,l2);
}
    ListNode* mergeKLists(vector<ListNode*>& Lists) {
        int k=Lists.size();
        if(k==0)
        return NULL;
        return partitionandmerge(0,k-1,Lists);
    }
};