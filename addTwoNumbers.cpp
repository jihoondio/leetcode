#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}	
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		ListNode * result = new ListNode(0);
		ListNode * node_sum = result;

		int up = 0;
		while (l1 != NULL && l2 != NULL )
		{
			int sum = l1->val + l2->val + up;
			if (sum > 9)
			{
				up = 1;
				sum -= 10;
			}
			else
			{
				up = 0;
			}

			node_sum->next = new ListNode(sum);
			node_sum = node_sum->next;

			l1 = l1->next;
			l2 = l2->next;
		}

		while (l1 != NULL)
		{
			int sum = l1->val + up;
			if (sum > 9)
			{
				up = 1;
				sum -= 10;
			}
			else
			{
				up = 0;
			}

			node_sum->next = new ListNode(sum);
			node_sum = node_sum->next;

			l1 = l1->next;
		}

		while (l2 != NULL)
		{
			int sum = l2->val + up;
			if (sum > 9)
			{
				up = 1;
				sum -= 10;
			}
			else
			{
				up = 0;
			}

			node_sum->next = new ListNode(sum);
			node_sum = node_sum->next;

			l2 = l2->next;
		}

		if (up != 0)
		{
			node_sum->next = new ListNode(up);;
		}

		auto * ptr = result->next;
		delete result;
		return ptr;
	}
};

int main()
{
	Solution s;

	ListNode *l1 = new ListNode(5);

	ListNode *l2 = new ListNode(5);

	ListNode *l3 = s.addTwoNumbers(l1, l2);
}
