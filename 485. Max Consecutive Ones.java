class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int currMax = 0;
        int consecutive = 0;
        for (int num : nums) {
            if (num == 1) {
                consecutive++;
                currMax = Math.max(consecutive, currMax);
            } else {
                consecutive = 0;
            }
        }
        return currMax;
    }
}