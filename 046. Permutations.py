class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        def perm(numbers, item: List[int], result):
            if len(numbers) == 0:
                _item = item[:]
                result.append(_item)
            else:
                for j in range(len(numbers)):
                    item.append(numbers[j])
                    popped_num = numbers.pop(j)
                    perm(numbers, item, result)
                    item.pop()
                    numbers.insert(j, popped_num)

        
        tmp = []
        result_list = []
        perm(nums, tmp, result_list)
        return result_list
        