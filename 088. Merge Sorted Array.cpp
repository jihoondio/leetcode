class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i_nums1 = 0, i_nums2 = 0;

        vector<int> tmp;
        for ( i_nums1 = 0, i_nums2 = 0; i_nums1 < m && i_nums2 < n; )
        {
            auto a = nums1[ i_nums1 ];
            auto b = nums2[ i_nums2 ];

            if ( a == b )
            {
                tmp.push_back( nums1[ i_nums1++ ] );
                tmp.push_back( nums2[ i_nums2++ ] );
            }
            else if ( nums1[ i_nums1 ] > nums2[ i_nums2 ] )
            {
                tmp.push_back( nums2[ i_nums2++ ] );
            }
            else
            {
                tmp.push_back( nums1[ i_nums1++ ] );
            }
        }

        while ( i_nums1 < m )
        {
            tmp.push_back( nums1[ i_nums1++ ] );
        }
        while ( i_nums2 < n )
        {
            tmp.push_back( nums2[ i_nums2++ ] );
        }
        nums1 = tmp;
    }
};
