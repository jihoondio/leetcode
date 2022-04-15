char arr[ 256 ] = { 0, };
        char arr2[ 256 ] = { 0, };

        for ( auto ch : s )
        {
            arr[ ch ]++;
        }

        for ( auto ch : t )
        {
            arr[ ch ]--;
        }

        if ( memcmp( arr, arr2, 256 ) ) 
            return false;
        else 
            return true;
