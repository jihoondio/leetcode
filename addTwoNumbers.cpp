// tester.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

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

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
