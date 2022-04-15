func validMountainArray(arr []int) bool {
    up := false
	dn := false
	prev := arr[0]
	for i := 1; i < len(arr); i++ {
		if prev < arr[i] {
			up = true
			if dn == true {
				return false
			}
		} else if prev > arr[i] {
			dn = true
			if !up {
				return false
			}
		} else {
			return false
		}
		prev = arr[i]
	}

	if up && dn {
		return true
	} else {
		return false
	}
}