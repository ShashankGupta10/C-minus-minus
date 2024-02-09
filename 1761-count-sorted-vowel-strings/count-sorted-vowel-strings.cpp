class Solution {
public:
    int helper(int i, int n, string vowels, vector<vector<int>> &dp) {
        if (n == 0) return 1;
        if (i >= 5) return 0;
        if (dp[i][n] != -1) return dp[i][n];
        int pick, notPick;
        pick = helper(i, n - 1, vowels, dp);
        notPick = helper(i + 1, n, vowels, dp);
        return dp[i][n] = pick + notPick;
    }
    int countVowelStrings(int n) {
        string vowels = "aeiou";
        vector<vector<int>> dp(5, vector<int>(n + 1, -1));
        return helper(0, n, vowels, dp);
    }
};