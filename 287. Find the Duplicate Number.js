/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function (nums) {
  let dictNums = {};
  for (let num of nums) {
    if (num in dictNums) {
      return num;
    } else {
      dictNums[num] = 1;
    }
  }
  return 0;
};
