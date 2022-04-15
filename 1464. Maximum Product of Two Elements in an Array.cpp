class Solution
{
public
	int maxProduct(int[] nums)
	{
		int firstLarge = 0;
		int secondLarge = 0;
		for (int i = 0; i < nums.length; i++)
		{
			int curr = nums[i];
			if (curr > firstLarge)
			{
				secondLarge = firstLarge;
				firstLarge = curr;
			}
			else if (curr > secondLarge)
			{
				secondLarge = curr;
			}
		}
		return (firstLarge - 1) * (secondLarge - 1);
	}
}