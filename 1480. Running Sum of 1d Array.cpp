class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int sum = 0;
        vector<int> r;
        for (auto n : nums)
        {
            sum += n;
            r.push_back(sum);
        }
        return r;
    }
};