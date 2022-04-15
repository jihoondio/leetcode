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
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        
        int cnt = 0;
        while (ptr1 && ptr2)
        {
            ptr1 = ptr1->next;
            cnt++;
            if (cnt % 2 == 0)
            {
                ptr2 = ptr2->next;
            }
        }
        return ptr2;
    }
};