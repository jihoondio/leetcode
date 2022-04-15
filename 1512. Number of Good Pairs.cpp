class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int h[101] = {
            0,
        };

        int h_idx = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            h_idx = nums[i];
            h[h_idx]++;
        }

        int res = 0;
        for (int i = 0; i < 101; i++)
        {
            if (h[i] > 0)
            {
                res = res + (h[i] * (h[i] - 1) / 2);
            }
        }
        return res;
    }
};