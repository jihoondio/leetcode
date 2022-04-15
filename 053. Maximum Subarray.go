func maxSubArray(nums []int) int {
	max_sum := nums[0]
	for i := 1; i < len(nums); i++ {
		nums[i] = max(nums[i], nums[i-1]+nums[i])
		max_sum = max(max_sum, nums[i])
	}
	return max_sum
}

func max(a, b int) int {
	if a < b {
		return b
	} else {
		return a
	}
}