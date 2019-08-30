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
    ListNode* rotateRight( ListNode* head, int k ) 
    {
        if ( head == NULL ) return NULL;

        int len = 1;
        ListNode * curr = head;
        while ( curr->next != NULL )
        {
            curr = curr->next;
            len++;
        }

        auto tail = curr;
        tail->next = head;

        int rotation = ( k >= len ) ? len - ( k % len ) : len - k;

        for ( int i = 0; i < rotation; i++ )
        {
            tail = head;
            head = head->next;
        }

        tail->next = NULL;

        return head;
    }
};
