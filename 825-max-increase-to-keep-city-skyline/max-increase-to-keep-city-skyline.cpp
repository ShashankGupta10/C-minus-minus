class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int ans = 0;
        int size = grid.size();
        vector<int> max_row(size, 0);
        vector<int> max_col(size, 0);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                max_row[i] = max(max_row[i], grid[i][j]);
                max_col[j] = max(max_col[j], grid[i][j]);
            }
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                ans += min(max_row[i], max_col[j]) - grid[i][j];
            }
        }
        return ans;
    }
};
