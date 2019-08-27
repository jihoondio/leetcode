class Solution {
public:
    int maxSubArray( std::vector<int>& nums ) 
    {
        int max_sum = nums[ 0 ], curSum = 0;
        for ( int num : nums ) 
        {
            curSum = max( curSum + num, num );
            max_sum = max( max_sum , curSum );
        }
        return max_sum;
    }
};
