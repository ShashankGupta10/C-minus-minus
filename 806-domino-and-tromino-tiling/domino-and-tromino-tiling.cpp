class Solution {
    int mod = 1e9+7;
    int solve(int n, vector<int> &dp){
        if(n <= 0) return 0;
        else if (n == 1) return dp[n]=1;
        else if (n == 2) return dp[n]=2;
        else if (n == 3) return dp[n]=5;
        if (dp[n] != -1) return dp[n];
        long long ans = 2*1LL * solve(n - 1, dp) + solve(n - 3, dp); 
        return dp[n] = (int)(ans % mod);
    }
public:
    int numTilings(int n) {
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};