
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

		nums1.insert(nums1.end(), nums2.begin(), nums2.end());

		auto & nums = nums1;
		sort(nums.begin(), nums.end());

		if (nums.size() % 2 == 1)
		{
			return (double)nums[nums.size() / 2];
		}
		else
		{
			int first = (nums.size() - 1) / 2;
			int second = first + 1;

			return (double)((nums[first] + nums[second]) / 2.0f);
		}
	}
};

int main()
{
	Solution s;
	vector<int> nums1 = { 1,2 };
	vector<int> nums2 = { 3,4 };
	s.findMedianSortedArrays(nums1, nums2);
}
