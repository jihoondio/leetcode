class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        if ( nums.size() <= 0 ) return false;
        
        std::sort( nums.begin(), nums.end() );

        int prev = nums[ 0 ];
        for ( int i = 1; i < nums.size(); i++ )
        {
            if ( nums[ i ] == prev ) return true;
            prev = nums[ i ];
        }

        return false;
    }
};
