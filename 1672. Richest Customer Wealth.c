int maximumWealth(int **accounts, int accountsSize, int *accountsColSize)
{
    int max_sum = 0;
    for (int i = 0; i < accountsSize; i++)
    {
        int curr_sum = 0;
        for (int j = 0; j < *accountsColSize; j++)
        {
            curr_sum += accounts[i][j];
        }
        if (curr_sum > max_sum)
            max_sum = curr_sum;
    }
    return max_sum;
}