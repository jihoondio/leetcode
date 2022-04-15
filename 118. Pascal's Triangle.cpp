class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res;

        for (int iRow = 0; iRow < numRows; iRow++)
        {
            vector<int> row(iRow + 1, 1);

            auto &upperRow = res[iRow - 1];
            for (int col = 1; col < row.size() - 1; col++)
            {
                row[col] = upperRow[col - 1] + upperRow[col];
            }

            res.push_back(row);
        }

        return res;
    }
};