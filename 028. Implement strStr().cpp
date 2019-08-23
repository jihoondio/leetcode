class Solution {
public:
	int strStr(string haystack, string needle) {

		if (needle.empty()) return 0;

		if (haystack.size() < needle.size())
		{
			return -1;
		}

		for (int i = 0; i <= haystack.size() - needle.size(); i++)
		{
			auto cmp = haystack.compare(i, needle.size(), needle.c_str());
			if (cmp == 0)
			{
				return i;
			}
		}

		return -1;
	}
};
