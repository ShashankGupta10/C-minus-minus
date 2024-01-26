class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        vector<int> dp(n, 0), dp2(n, 0);
        dp[0] = nums[0];
        dp2[0] = 0;
        dp2[1] = nums[1]; 
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; ++i) {
            if (i != n - 1)
                dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
            dp2[i] = max(dp2[i - 1], dp2[i - 2] + nums[i]);
        }
        return max(dp[n - 2], dp2[n - 1]);
    }
};