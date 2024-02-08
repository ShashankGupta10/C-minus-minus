class Solution {
public:
    bool subsetSum(int ind,int target,vector<int>& arr,vector<vector<int>>& dp){
        if (target == 0) return true;
        if (ind == 0) return arr[0] == target;
        if (dp[ind][target] != -1) return dp[ind][target];
        bool notpick = subsetSum(ind - 1, target, arr, dp);
        bool pick = false;
        if (target >= arr[ind]) pick = subsetSum(ind - 1, target - arr[ind], arr, dp);
        return dp[ind][target] = notpick | pick;
    }
    bool canPartition(vector<int>& nums) {
        int total = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) total += nums[i];
        if(total & 1) return false;
        int target = total / 2;
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));
        return subsetSum(n - 1, target, nums, dp);
    }
};