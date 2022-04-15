class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        _sum = sum(arr)
        arr_sum = [arr[0]]
        for i in range(1, len(arr)):
            arr_sum.append(arr[i] + arr_sum[i - 1])

        curr_odd = 3
        while curr_odd <= len(arr):
            for j in range(curr_odd - 1, len(arr)):
                odd_sum = arr_sum[j]
                if j >= curr_odd:
                    odd_sum -= arr_sum[j - curr_odd]
                _sum += odd_sum
            curr_odd += 2

        return _sum