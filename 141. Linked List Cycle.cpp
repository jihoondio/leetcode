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
    bool hasCycle(ListNode *head)
    {

        set<ListNode *> ptrs;

        ListNode *node = head;

        while (node)
        {
            if (ptrs.find(node) != ptrs.end())
            {
                return true;
            }
            else
            {
                ptrs.insert(node);
            }
            node = node->next;
        }
        return false;
    }
};