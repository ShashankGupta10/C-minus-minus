class Solution {
public:
    int helper(vector<int>& v, int n, int size, vector<vector<int>>& dp) {
        if (n == 0) return 0;
        if (size < 0) return n + 1;
        if (dp[n][size] != -1) return dp[n][size];
        int take = INT_MAX;
        if (v[size] <= n) {
            take =  helper(v, n - v[size], size, dp);
            if (take != INT_MAX) take++;
        }
        int notTake =  helper(v, n, size - 1, dp);
        return dp[n][size] = min(take, notTake);
    }
    int numSquares(int n) {
        vector<int> v;
        for (int i = 1; i * i <= n; ++i) v.push_back(i * i);        
        vector<vector<int>> dp(n + 1, vector<int>(v.size(), -1));
        return helper(v, n, v.size() - 1, dp);
    }
};
