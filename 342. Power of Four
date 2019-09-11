class Solution {
public:
    bool isPowerOfFour(int num) 
    {
        if ( num < 1 ) return false;
        if ( num == 1 ) return true;
        if ( num < 4  ) return false;
        
        while ( num > 4 )
        {
            if ( num % 4 != 0 ) return false;
            num /= 4;
        }
        
        if ( num == 4 ) return true;
        else return false;
    }
};
