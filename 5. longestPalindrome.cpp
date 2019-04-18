#include <iostream>
#include <vector>
#include <cmath>
#include <string.h>
#include <unistd.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s)
    {
        int i = 0;
        int j = s.length() - 1;

        while ( i < j )
        {
            if ( s[i] != s[j] )
            {
                return false;
            }

            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {

        int     max_len = 0;
        string  max_str;

        for ( int front = 0; front < s.length() - 1; front++ )
        {
            for ( int back = s.length() - 1; back >= front; back-- )
            {
                auto subs = s.substr(front, back - front + 1);
                if ( isPalindrome( subs ) == true )
                {
                    if ( subs.length() > max_len )
                    {
                        max_len = subs.length();
                        max_str = subs;
                    }
                }
            }
        }
    }
};

int main()
{
    Solution s;
    cout << s.longestPalindrome( string("babad" ) ) << endl;
}