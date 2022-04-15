class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt_zero = 0;

        for ( int i = 0; i < nums.size(); i++ )
        {
            if ( nums[ i ] == 0 )
            {
                cnt_zero++;
            }
            else
            {
                nums[ i - cnt_zero ] = nums[ i ];
            }
        }

        for ( int i = cnt_zero; i > 0; i-- )
        {
            nums[ nums.size() - i ] = 0;
        }
    }
};
