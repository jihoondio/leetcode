func countKDifference(nums []int, k int) int {
	count := 0
	for i := 0; i < len(nums)-1; i++ {
		for j := i + 1; j < len(nums); j++ {
			diff := nums[i] - nums[j]
			if diff < 0 {
				diff *= -1
			}
			if diff == k {
				count++
			}
		}
	}
	return count
}