class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        int alpha[ 256 ] = { 0, };
        for ( auto j : J )
        {
            alpha[ j ] = 1;
        }

        int res = 0;
        for ( auto s : S )
        {
            if ( alpha[ s ] != 0 )
            {
                res++;
            }
        }

        return res;
    }
};
