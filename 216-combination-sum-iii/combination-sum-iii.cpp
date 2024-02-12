class Solution {
public:
    void helper(vector<vector<int>> &ans, int k, int n, vector<int> temp, int num) {
        if (n < 0 || k < 0 || num < 0) return;
        if (n == 0 && k == 0) {
            ans.emplace_back(temp);
            return;
        }
        helper(ans, k, n, temp, num - 1);
        temp.push_back(num);
        helper(ans, k - 1, n - num, temp, num - 1);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(ans, k, n, temp, 9);
        return ans;
    }
};