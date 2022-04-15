class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        vector<string> morse = {".-", "-...", "-.-.", "-..", ".",
                                "..-.", "--.", "....", "..", ".---",
                                "-.-", ".-..", "--", "-.", "---",
                                ".--.", "--.-", ".-.", "...", "-",
                                "..-", "...-", ".--", "-..-", "-.--", "--.."};

        std::map<string, int> codes;
        for (auto &word : words)
        {
            string decoded;
            for (auto &ch : word)
            {
                decoded += morse[ch - 'a'];
            }

            if (codes.find(decoded) == codes.end())
            {
                codes[decoded] = 1;
            }
        }

        return codes.size();
    }
};