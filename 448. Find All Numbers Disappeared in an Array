class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for ( int i = 0; i < nums.size(); i++ ) 
        {
            int val = abs( nums[ i ] ) - 1;
            if ( nums[ val ] > 0 ) 
            {
                nums[ val ] = -nums[ val ];
            }
        }

        vector<int> disappeardNumbers;

        for ( int i = 0; i < nums.size(); i++ ) 
        {
            if ( nums[ i ] > 0 ) disappeardNumbers.push_back( i + 1 );
        }

        return disappeardNumbers;
    }
};
