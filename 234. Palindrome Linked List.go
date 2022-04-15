/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
 func isPalindrome(head *ListNode) bool {
	node := head
	var arr []int
	for node != nil {
		arr = append(arr, node.Val)
		node = node.Next
	}

	mid := len(arr) / 2
	var i, j int
	if len(arr) % 2 == 1 {
		i = mid - 1
		j = mid + 1
	} else {
		j = mid
		i = mid - 1
	}
	for 0 <= i && j < len(arr) {
		if arr[i] != arr[j] {
			return false
		}
		i--
		j++
	}
	return true
}