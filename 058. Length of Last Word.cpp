class Solution {
public:
    int lengthOfLastWord(string s) {
        int start = s.size() - 1;
        for ( ; start >= 0; start-- )
        {
            if ( s[ start ] != ' ' )
            {
                break;
            }
        }

        int last_word_len = 0;
        for ( int i = start; i >= 0; i-- )
        {
            if ( s[ i ] != ' ' )
            {
                last_word_len++;
            }
            else
            {
                break;
            }
        }

        return last_word_len;
    }
};
