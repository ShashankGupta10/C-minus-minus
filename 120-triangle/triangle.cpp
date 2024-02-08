class Solution {
public:
    int helper(int row, int col, vector<vector<int>>& triangle, vector<vector<int>>& dp) {
        if (row == triangle.size() - 1) return triangle[row][col];
        if (dp[row][col] != -1) return dp[row][col];
        dp[row][col] = triangle[row][col] + min(helper(row + 1, col, triangle, dp), helper(row + 1, col + 1, triangle, dp));
        return dp[row][col];
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return helper(0, 0, triangle, dp);
    }
};
