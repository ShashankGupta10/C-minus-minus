class Solution {
public:
    void helper(vector<int> candidates, int target, vector<vector<int>> &ans, vector<int> temp, int n) {
        if (n < 0) return;
        if (accumulate(temp.begin(), temp.end(), 0) > target) return;
        if (accumulate(temp.begin(), temp.end(), 0) == target) {
            ans.emplace_back(temp);
            return;
        }
        helper(candidates, target, ans, temp, n - 1);
        temp.emplace_back(candidates[n]);
        helper(candidates, target, ans, temp , n);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = candidates.size();
        helper(candidates, target, ans, temp, n - 1);
        return ans;
    }
};