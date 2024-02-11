class Solution {
public:
    vector<vector<vector<int>>> dp;
    int helper(vector<vector<int>>& grid, int row, int col1, int col2) {
        int rows = grid.size();
        int cols = grid[0].size();
        if (row >= rows || col1 < 0 || col1 >= cols || col2 < 0 || col2 >= cols) return 0;
        if (grid[row][col1] == -1 || grid[row][col2] == -1) return 0;
        if (dp[row][col1][col2] != -1) return dp[row][col1][col2];
        int cherries = grid[row][col1] + (col1 != col2 ? grid[row][col2] : 0);
        int maxCherries = 0;
        for (int d1 = -1; d1 <= 1; ++d1) {
            for (int d2 = -1; d2 <= 1; ++d2) {
                maxCherries = max(maxCherries, cherries + helper(grid, row + 1, col1 + d1, col2 + d2));
            }
        }
        return dp[row][col1][col2] = maxCherries;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        dp.assign(rows, vector<vector<int>>(cols, vector<int>(cols, -1)));
        return helper(grid, 0, 0, cols - 1);
    }
};
