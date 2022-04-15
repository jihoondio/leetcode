class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int curr_cons = 0;
        int max_ = 0;
        for (int n : nums)
        {
            if (n == 0)
            {
                curr_cons = 0;
            }
            else
            {
                curr_cons += 1;
                if (curr_cons > max_)
                    max_ = curr_cons;
            }
        }
        return max_;
    }
};