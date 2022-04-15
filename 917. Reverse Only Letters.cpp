class Solution
{
public:
    string reverseOnlyLetters(string S)
    {
        int l = 0;
        int r = S.size() - 1;
        while (l < r)
        {
            if (!isalpha(S[l]))
            {
                l++;
                continue;
            }
            if (!isalpha(S[r]))
            {
                r--;
                continue;
            }
            char t = S[l];
            S[l] = S[r];
            S[r] = t;
            l++;
            r--;
        }
        return S;
    }
};