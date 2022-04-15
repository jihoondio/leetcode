func containsDuplicate(nums []int) bool {
	var dict = make(map[int]int)
	for _, num := range nums {
		_, exist := dict[num]
		if exist {
			return true
		} else {
			dict[num] = 1
		}
	}
	return false
}