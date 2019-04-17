#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {

		if (s.length() == 0 || s.length() == 1) return s.length();

		int max_len = 0;				
		string result;
		for (int i = 0; i < s.size(); i++)
		{
			char ch = s[i];

			auto index = result.find(ch);
			if (index != string::npos)
			{
				if (result.size() > max_len)
				{
					max_len = result.size();
				}
				result = result.substr(index + 1, i - index + 1);
				result.append(1, ch);
			}
			else
			{
				result.append(1, ch);
				if (result.size() > max_len)
				{
					max_len = result.size();
				}
			}
		}

		return max_len;
	}
};

int main()
{
	Solution s;
    std::cout << s.lengthOfLongestSubstring(string("au"));
}
