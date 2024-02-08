class Solution {
public:
    int helper(vector<vector<int>>& grid, int m, int n, vector<vector<int>>& dp) {
        if (m < 0 || n < 0) return INT_MAX;
        if (m == 0 && n == 0) return grid[m][n];
        if (dp[m][n] != -1) return dp[m][n];
        dp[m][n] = grid[m][n] + min(helper(grid, m - 1, n, dp), helper(grid, m, n - 1, dp));
        return dp[m][n];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(grid, m - 1, n - 1, dp);
    }
};
