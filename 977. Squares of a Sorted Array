class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        auto size = A.size();

        vector<int> r;
        r.resize( size );

        int total = 0;
        int i = 0, j = size - 1, pos = size - 1;
        while ( total < size )
        {
            int f = abs( A[ i ] );
            int s = abs( A[ j ] );

            if ( i == j )
            {
                r[ pos-- ] = f * f;
                break;
            }

            if ( f > s )
            {
                r[ pos-- ] = f * f;
                i++;
                total++;
            }
            else if ( f < s )
            {
                r[ pos-- ] = s * s;
                j--;
                total++;
            }
            else
            {
                r[ pos-- ] = f * f;
                r[ pos-- ] = s * s;
                i++;
                j--;
                total += 2;
            }
        }

        return r;
    }
};
