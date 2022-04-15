/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node * node = head;
        while (node)
        {
            if (node->child)
            {
                Node* childTail = node->child;
                while (childTail->next != NULL) 
                {
                    childTail = childTail->next;
                }
                childTail->next = node->next;
                if (childTail->next)
                    childTail->next->prev = childTail;
                node->next = node->child;
                node->next->prev = node;
                node->child = NULL;
            }
            else
            {
                node = node->next;
            }
        }
        return head;
    }
};
