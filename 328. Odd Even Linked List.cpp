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
    ListNode* oddEvenList(ListNode* head) {
        if (!head)
            return NULL;
        if (!head->next)
            return head;

        ListNode org;
        org.next = head;
        
        ListNode evens;
        ListNode *evensTail = &evens;
        
        ListNode *prev = &org;
        ListNode *curr = head;
        
        int count = 1;
        while (curr)
        {
            if (count % 2 == 0)
            {
                prev->next = curr->next;

                evensTail->next = curr;
                evensTail = curr;
                evensTail->next = NULL;
                
                curr = prev->next;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
            count++;
        }

        ListNode *node = head;
        while (node->next)
        {
            node = node->next;
        }
        node->next = evens.next;
        return head;
    }
};