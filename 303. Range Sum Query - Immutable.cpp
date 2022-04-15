class NumArray
{
private:
    vector<int> _nums;

public:
    NumArray(vector<int> &nums)
    {
        if (nums.empty())
            return;
        _nums.push_back(nums[0]);
        for (int col = 1; col < nums.size(); col++)
        {
            _nums.push_back(_nums[col - 1] + nums[col]);
        }
    }

    int sumRange(int i, int j)
    {
        if (_nums.empty())
            return 0;

        return _nums[j] - ((i == 0) ? 0 : _nums[i - 1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */