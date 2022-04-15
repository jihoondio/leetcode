class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        dp = [amount + 1] * (amount + 1)
        dp[0] = 0
        for num in range(1, amount + 1):
            for coin in coins:
                if coin <= num:
                    dp_num = dp[num]
                    dp_pre = dp[num - coin]
                    dp[num] = min(dp_num, dp_pre + 1)

        if dp[amount] > amount:
            return -1
        else:
            return dp[amount]