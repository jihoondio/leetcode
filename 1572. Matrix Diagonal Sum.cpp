class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int colSize = mat[0].size();
        int rowSize = mat.size();
        for (int i = 0, j = 0; i < rowSize; i++, j++)
        {
            if (i == colSize - i - 1)
            {
                sum += mat[i][j];
            }
            else 
            {
                sum += (mat[i][j] + mat[colSize - i - 1][j]);
            }
        }
        return sum;
    }
};