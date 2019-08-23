class Solution {
public:
	string longestPalindrome(string s) {

		string result;

		if (s.empty()) return "";
		if (s.size() == 1) return s;

		for (int i = 0; i < s.length(); i++)
		{
			for (int j = s.length() - 1; j >= i; j--)
			{
				if (j - i + 1 < result.length()) break;
				
				int f = i;
				int b = j;
								
				while (f <= b)
				{
					if (s[f] != s[b]) break;
					f++;
					b--;
				}

				if (f > b)
				{
					if (j - i + 1 > result.length())
					{
						result = s.substr(i, j - i + 1);
					}
				}
			}
		}

		return result;
	}
};
