#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		
		vector<int> nums = nums1;
		nums.insert(nums.end(), nums2.begin(), nums2.end());
		sort(nums.begin(), nums.end());

		if (nums.size() % 2 == 1)
		{
			return (double)nums[nums.size() / 2];
		}
		else
		{
			int first = (nums.size() - 1) / 2;
			int second = first + 1;

			return (double)((nums[first] + nums[second]) / 2);
		}
	}
};

int main()
{
	Solution s;
	s.findMedianSortedArrays([1, 2], [3, 4]);
}
