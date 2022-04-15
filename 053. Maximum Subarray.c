int max(int a, int b) {
    if (a < b)
        return b;
    else
        return a;
}

int maxSubArray(int* nums, int numsSize){
    int max_sum = nums[0];
    for (int i = 1; i < numsSize; i++) {
        nums[i] = max(nums[i], nums[i - 1] + nums[i]);
        max_sum = max(max_sum, nums[i]);
    }
    return max_sum;
}
