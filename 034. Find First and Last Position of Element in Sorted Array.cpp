vector<int> searchRange(vector<int>& nums, int target) 
{
    vector<int> result = { -1,-1 };
    for ( int i = 0; i < nums.size(); i++ )
    {
        if ( nums[ i ] == target )
        {
            result[ 0 ] = i;
            result[ 1 ] = i;

            int j = i + 1;
            while ( j != nums.size() )
            {
                if ( nums[ j ] != target )
                {
                    break;
                }
                else
                {
                    result[ 1 ] = j;
                }

                j++;
            }

            return result;
        }
    }

    return result;
}
