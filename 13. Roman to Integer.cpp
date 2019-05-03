class Solution {
public:
	int romanToInt(string s) {
		
		int arrRomans10[26];
		arrRomans10['I' - 'A'] = 1;
		arrRomans10['V' - 'A'] = 5;
		arrRomans10['X' - 'A'] = 10;
		arrRomans10['L' - 'A'] = 50;
		arrRomans10['C' - 'A'] = 100;
		arrRomans10['D' - 'A'] = 500;
		arrRomans10['M' - 'A'] = 1000;

		int result = 0;

		char prev_char = 0;
		for (auto ch : s)
		{
			result += arrRomans10[ch - 'A'];
			if (ch == 'V' || ch == 'X')
			{
				if (prev_char == 'I')
				{
					result -= 2;
				}
			}
			else if (ch == 'L' || ch == 'C')
			{
				if (prev_char == 'X')
				{
					result -= 20;
				}
			}
			else if (ch == 'D' || ch == 'M')
			{
				if (prev_char == 'C')
				{
					result -= 200;
				}
			}
			else
			{

			}

			prev_char = ch;
		}

		return result;
	}
};
