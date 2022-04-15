class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        auto &res = digits;

        for (int i = res.size() - 1; i >= 0; i--)
        {
            if (res[i] < 9)
            {
                res[i]++;
                return res;
            }

            res[i] = 0;
        }

        if (res[0] == 0)
        {
            res.resize(res.size() + 1);
            res[0] = 1;
        }

        return res;
    }
};