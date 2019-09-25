class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for ( int i = 1; i <= n; i++ )
        {
            int three = i % 3;
            int five = i % 5;

            if ( three == 0 && five == 0 )
            {
                res.push_back( "FizzBuzz" );
            }
            else if ( three == 0 && five != 0 )
            {
                res.push_back( "Fizz" );
            }
            else if ( three != 0 && five == 0 )
            {
                res.push_back( "Buzz" );
            }
            else
            {
                res.push_back( std::to_string( i ) );
            }
        }
        return res;
    }
};
