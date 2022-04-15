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
        ListNode * ptr1 = headA;
        ListNode * ptr2 = headB;
        
        int lenA = 0;
        while (ptr1) 
        {
            ptr1 = ptr1->next;
            lenA ++;
        }
        
        int lenB = 0;
        while (ptr2) 
        {
            ptr2 = ptr2->next;
            lenB ++;
        }
        
        ptr1 = headA;
        ptr2 = headB;
        
        if (lenA > lenB)
        {
            int n = lenA - lenB;
            while (n > 0)
            {
                ptr1 = ptr1->next;
                n--;
            }
        }
        else if (lenA < lenB)
        {
            int n = lenB - lenA;
            while (n > 0)
            {
                ptr2 = ptr2->next;
                n--;
            }
        }
        
        while (ptr1 && ptr2)
        {
            if (ptr1 == ptr2)
                return ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
    }
};
