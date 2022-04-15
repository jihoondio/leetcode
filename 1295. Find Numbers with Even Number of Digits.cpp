class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (auto i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int len = 1;
            while (num >= 10) {
                num /= 10;
                len ++;
            }
            if (len % 2 == 0) {
                count ++;
            }
        }
        return count;
    }
};