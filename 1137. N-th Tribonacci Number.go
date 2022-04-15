func tribonacci(n int) int {
	if n == 0 {
		return 0
	}
	if n == 1 {
		return 1
	}
	if n == 2 {
		return 1
	}

	first := 0
	second := 1
	third := 1
	fib := 0
	for i := 3; i <= n; i++ {
		fib = first + second + third
		first = second
		second = third
		third = fib
	}
	return fib    
}