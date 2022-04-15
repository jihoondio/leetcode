int sumOfUnique(int *nums, int numsSize)
{
    int hashes[100] = {
        0,
    };
    int sum = 0;
    int dup_sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int num = nums[i];
        hashes[num - 1]++;
        sum += num;
        if (hashes[num - 1] > 1)
        {
            dup_sum += num;
            if (hashes[num - 1] == 2)
            {
                dup_sum += num;
            }
        }
    }

    return sum - dup_sum;
}