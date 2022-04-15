class Solution
{
public:
    int firstUniqChar(string s)
    {
        map<int, int> mapChars;
        for (auto c : s)
        {
            if (mapChars.find(c) == mapChars.end())
            {
                mapChars[c] = 1;
            }
            else
            {
                mapChars[c]++;
            }
        }

        for (auto i = 0; i < s.length(); i++)
        {
            if (mapChars[s[i]] == 1)
                return i;
        }

        return -1;
    }
};