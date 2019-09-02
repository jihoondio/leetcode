class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> s;
        vector<int>   r;

        for ( int i = 0; i < nums.size(); i++ )
        {
            auto curr = nums[ i ];
            auto it = s.find( target - curr );
            if ( it != s.end() )
            {
                auto j = it->second;
                r.push_back( min( i, j ) );
                r.push_back( max( i, j ) );
                return r;
            }
            else
            {
                s[ curr ] = i;
            }
        }
        return r;
    }
};
