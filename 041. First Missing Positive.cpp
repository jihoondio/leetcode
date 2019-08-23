class Solution {
public:
	int firstMissingPositive(vector<int>& nums) {
		int s = 1;

		sort(nums.begin(), nums.end());

		for (auto num : nums)
		{
			if (num == s)
			{
				s++;
			}
		}

		return s;
	}
};
