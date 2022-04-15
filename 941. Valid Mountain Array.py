class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        up = False
        dn = False
        prev = arr[0]
        for i in range(1, len(arr)):
            if prev < arr[i]:
                up = True
                if dn:
                    return False
            elif prev > arr[i]:
                dn = True
                if not up:
                    return False
            else:
                return False
            prev = arr[i]
        if up and dn:
            return True
        else:
            return False