// ConsoleApp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {

		int i = 0;
		for (auto j = 0; j < nums.size(); j++)
		{
			if (nums[j] != val)
			{
				nums[i] = nums[j];
				i++;
			}
		}

		return i;
	}
};

int main()
{
	Solution s;
	vector<int> v{ 0,0,1,1,2,2 };
	std::cout << s.removeElement(v, 1) << endl;
}
