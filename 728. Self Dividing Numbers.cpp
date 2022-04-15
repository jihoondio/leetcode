class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> res;

        for ( int num = left; num <= right; num++ )
        {
            int num_ = num;

            bool found = true;
            while ( num_ > 0 )
            {
                int digit = num_ % 10;
                
                if ( digit == 0 )
                {
                    found = false;
                    break;
                }

                if ( num % digit != 0 )
                {
                    found = false;
                    break;
                }

                num_ = num_ / 10;
            }

            if ( found ) res.push_back( num );
        }

        return res;
    }
};
