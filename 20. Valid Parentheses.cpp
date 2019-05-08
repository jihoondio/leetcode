class Solution {
public:
	bool isValid(string s) {

		map<char, char> m;
		m[')'] = '(';
		m['}'] = '{';
		m[']'] = '[';

		stack<char> stk;

		int lcount = 0;
		int rcount = 0;
		for (auto ch : s)
		{
			if (ch == '(' || ch == '{' || ch == '[')
			{
				stk.push(ch);
				lcount++;
			}
			else
			{
				rcount++;

				if (stk.size() == 0) return false;

				auto l = stk.top();
				if (m[ch] != l)
				{
					return false;
				}
				
				stk.pop();
			}
		}

		if (lcount == rcount) 
			return true;
		else 
			return false;
	}
};
