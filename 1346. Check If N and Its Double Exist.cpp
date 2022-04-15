class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for ( auto i = 0; i < arr.size() - 1; i++ )
        {
            for ( auto j = i + 1; j < arr.size(); j++ )
            {
                if ( arr[ i ] * 2 == arr[ j ] || arr[i] == arr[j] * 2)
                {
                    return true;
                }
            }
        }
        return false;
    }
};