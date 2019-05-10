struct ListNode {
	int val;
    ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* swapPairs(ListNode* head) {

		ListNode list(0);
		list.next = head;

		if (list.next == NULL) return NULL;

		auto * p1 = &list;
		auto * p2 = p1->next;
		auto * p3 = p2->next;
		
		while (p1 && p2 && p3)
		{
			p2->next = p3->next;
			p3->next = p2;
			p1->next = p3;
			
			auto * t = p2;
			p2 = p3;
			p3 = t;
			
			if (p3)
			{
				p1 = p3;
				p2 = p1->next;
				if (p2) p3 = p2->next;
			}
		}

		return list.next;
	}
};
