func fib(n int) int {
	if n == 0 {
		return 0
	}
	if n == 1 {
		return 1
	}

	first := 0
	second := 1
	sum_ := 0
	for i := 2; i <= n; i++ {
		sum_ = first + second
		first = second
		second = sum_
	}
	return sum_
}