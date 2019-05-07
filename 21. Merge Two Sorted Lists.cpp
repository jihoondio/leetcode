struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

		ListNode* result = NULL;
		ListNode* last = NULL;
		
		auto * p1 = l1;
		auto * p2 = l2;

		while (p1 != NULL && p2 != NULL)
		{
			if (p1->val <= p2->val)
			{
				if (result == NULL)
				{
					result = p1;
					last = p1;
				}
				else
				{
					last->next = p1;
					last = last->next;
				}
				
				p1 = p1->next;
			}
			else
			{
				if (result == NULL)
				{
					result = p2;
					last = p2;
				}
				else
				{
					last->next = p2;
					last = last->next;
				}

				p2 = p2->next;
			}
		}

		if (p1 != NULL)
		{
			if (last != NULL)
				last->next = p1;
			else
				result = p1;
		}
		if (p2 != NULL)
		{
			if (last != NULL)
				last->next = p2;
			else
				result = p2;
		}

		return result;
	}
};
