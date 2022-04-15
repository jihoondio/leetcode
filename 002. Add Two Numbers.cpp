/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode head(0);
        ListNode *prev = &head;
        ListNode *n1 = l1;
        ListNode *n2 = l2;

        int up = 0;
        while (n1 && n2)
        {
            int sum = n1->val + n2->val + up;
            int rem = sum % 10;
            prev->next = new ListNode(rem);
            prev = prev->next;
            up = sum / 10;
            n1 = n1->next;
            n2 = n2->next;
        }
        while (n1)
        {
            int sum = n1->val + up;
            int rem = sum % 10;
            prev->next = new ListNode(rem);
            prev = prev->next;
            n1 = n1->next;
            up = sum / 10;
        }
        while (n2)
        {
            int sum = n2->val + up;
            int rem = sum % 10;
            prev->next = new ListNode(rem);
            prev = prev->next;
            n2 = n2->next;
            up = sum / 10;
        }
        if (up > 0)
        {
            prev->next = new ListNode(1);
        }
        return head.next;
    }
};