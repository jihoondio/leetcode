class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int res = -1;
        int min_diff = INT32_MAX;
        for (size_t i = 0; i < points.size(); i++)
        {
            if (x == points[i][0] || y == points[i][1])
            {
                int curr_diff = abs(x - points[i][0]) + abs(y - points[i][1]);
                if (curr_diff < min_diff)
                {
                    min_diff = curr_diff;
                    res = i;
                }
            }
        }
        return res;
    }
};