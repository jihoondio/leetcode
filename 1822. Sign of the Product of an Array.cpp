class Solution {
public:
    int arraySign(vector<int>& nums) {
        int p = 1;
        for (auto num : nums) {
            if (num == 0) return 0;
            if (num < 0) p = p * -1;
        }
        return p;
    }
};