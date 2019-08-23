struct ListNode {
	int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		
		ListNode  list(0);
		list.next = head;

		ListNode* p1 = &list;
		ListNode* p2 = &list;

		for (int i = 0; i <= n && p2 != NULL; i++)
		{
			p2 = p2->next;
		}

		while (p2 != NULL)
		{
			p1 = p1->next;
			p2 = p2->next;
		}
		
		p1->next = p1->next->next;

		return list.next;
	}
};
