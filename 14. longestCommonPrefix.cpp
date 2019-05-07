class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string result = "";

		if (strs.size() == 0) return result;
		if (strs.size() == 1) return strs[0];

		bool toBreak = false;
		for ( int i = 0; i < strs[0].length() && toBreak == false; i++ )
		{
			char ch = strs[0].at(i);
			for (int j = 1; j < strs.size(); j++)
			{
				if (strs[j].length() > i)
				{
					if (strs[j].at(i) != ch)
					{
						toBreak = true;
						break;
					}
				}
				else
				{
					toBreak = true;
					break;
				}
			}

			if (toBreak == false)
			{
				result.append(1, ch);
			}
		}

		return result;
	}
};
