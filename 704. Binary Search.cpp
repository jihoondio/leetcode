class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;
        while (l <= h) 
        {
            int m = (l + h) / 2;
            
            if (nums[m] == target) 
            {
                return m;
            }
            if (nums[m] > target)
            {
                h = m - 1;
            }
            if (nums[m] < target)
            {
                l = m + 1;
            }
        }
        return -1;
    }
};