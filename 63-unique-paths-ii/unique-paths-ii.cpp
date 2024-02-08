#include <vector>

using namespace std;

class Solution {
public:
    int helper(int m, int n, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        if (m < 0 || n < 0) return 0;
        if (grid[m][n] == 1) return 0;
        if (m == 0 && n == 0) return 1;
        if (dp[m][n] != -1) return dp[m][n];
        dp[m][n] = helper(m - 1, n, grid, dp) + helper(m, n - 1, grid, dp);
        return dp[m][n];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if (obstacleGrid[0][0] == 1) return 0;
        vector<vector<int>> dp(m, vector<int>(n, -1));
        int result = helper(m - 1, n - 1, obstacleGrid, dp);
        return result;
    }
};
