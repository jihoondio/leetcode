class Solution {
public:
    int reverse(int x) {

        int reversed = 0;

        int i = 1;
        while ( x != 0 )
        {
            int mod = x % 10;
            if ( reversed < INT32_MIN / 10 || INT32_MAX / 10 < reversed ) return 0;
            reversed = ( reversed * 10 ) + mod;
            x /= 10;
        }

        return reversed;
    }
};