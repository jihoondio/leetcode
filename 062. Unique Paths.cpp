class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        if (m == 1 && n == 1)
            return 1;

        vector<vector<int>> map;
        vector<int> row(n, 0);
        for (int irow = 0; irow < m; irow++)
        {
            map.push_back(row);
        }

        for (int icol = 1; icol < n; icol++)
        {
            map[0][icol] = 1;
        }
        for (int irow = 1; irow < m; irow++)
        {
            map[irow][0] = 1;
        }

        for (int irow = 1; irow < m; irow++)
        {
            for (int icol = 1; icol < n; icol++)
            {
                map[irow][icol] = map[irow - 1][icol] + map[irow][icol - 1];
            }
        }

        return map[m - 1][n - 1];
    }
};