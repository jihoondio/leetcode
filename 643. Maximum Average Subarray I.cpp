class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int max_sum = INT_MIN;
        if (nums.size() == 1)
        {
            max_sum = nums[0];
        }

        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] = nums[i - 1] + nums[i];

            if (i >= k - 1)
            {
                if (i >= k)
                    max_sum = std::max(max_sum, nums[i] - nums[i - k]);
                else
                    max_sum = std::max(max_sum, nums[i]);
            }
        }

        return (double)max_sum / k;
    }
};