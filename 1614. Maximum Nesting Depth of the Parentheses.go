func maxDepth(s string) int {
	curr := 0
	res := 0
	for i := 0; i < len(s); i++ {
		ch := []rune(s)[i]
		if ch == '(' {
			curr++
		} else if ch == ')' {
			curr--
		}
		if curr > res {
			res = curr
		}
	}
	return res
}