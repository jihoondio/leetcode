class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> result;

        auto it = nums.begin();
        if (it == nums.end())
            return 0;

        result.push_back(*it);
        int curr_num = *it;
        int count = 1;

        it++;

        for (; it != nums.end(); ++it)
        {
            if (*it == curr_num)
            {
                count++;
            }
            else
            {
                curr_num = *it;
                count = 1;
            }

            if (count < 3)
            {
                result.push_back(*it);
            }
        }

        nums = result;

        return result.size();
    }
};