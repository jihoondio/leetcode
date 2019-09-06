class Solution {
public:
    int repeatedNTimes(vector<int>& A) 
    {
        map<int, int> arr;

        for ( auto a : A )
        {
            if ( arr.find( a ) != arr.end() )
            {
                return a;
            }
            arr[ a ] = 1;
        }

        return 0;
    }
};
