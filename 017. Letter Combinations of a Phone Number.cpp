class Solution
{
private:
    vector<string> dial{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void _letterCombinations(string combination, string &digits, int idigit, vector<string> &res)
    {
        if (idigit == digits.size())
        {
            res.push_back(combination);
        }
        else
        {
            auto digit = digits[idigit];
            auto n_digit = digit - '0';
            for (auto ch : dial[n_digit])
            {
                _letterCombinations(combination + ch, digits, idigit + 1, res);
            }
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> res;
        if (digits.empty())
            return res;

        _letterCombinations("", digits, 0, res);
        return res;
    }
};
