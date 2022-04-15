class Solution
{
public:
    int _fib(int N, vector<int> &nums)
    {
        if (nums[N] >= 0)
            return nums[N];

        nums[N] = _fib(N - 2, nums) + _fib(N - 1, nums);
        return nums[N];
    }

    int fib(int N)
    {
        if (N <= 1)
            return N;

        vector<int> nums(N + 1, -1);
        nums[0] = 0;
        nums[1] = 1;
        return _fib(N - 2, nums) + _fib(N - 1, nums);
    }
};