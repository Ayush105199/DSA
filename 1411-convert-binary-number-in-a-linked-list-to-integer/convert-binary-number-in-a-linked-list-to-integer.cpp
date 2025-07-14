// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     int getDecimalValue(ListNode* head) {
//         int i=0;
// while(head!=nullptr)
// {
//     i=((i<<1)|head->val);
//     head=head->next;
// }
//        return i;
        
//     }
// };

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
    int getDecimalValue(ListNode* head) {
        vector<int>m;
        while(head!=nullptr)
        {
            m.push_back(head->val);
            head=head->next;
        }
        int result=0;
        int n=m.size();
        int j=0;
        for(int i=n-1;i>=0;i--)
        {
            result+=m[i]*pow(2,j);
            j++;

        }
        return result;



    }
};