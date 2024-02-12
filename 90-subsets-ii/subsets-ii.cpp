class Solution {
public:
    void helper(vector<int> nums, int n, vector<vector<int>> &ans, vector<int> temp) {
        if (n == -1) {
            int i;
            for (i = 0; i < ans.size(); i++) {
                vector<int> v = ans[i];
                sort(temp.begin(), temp.end());
                if (ans[i] == temp) break;
            }
            if (i == ans.size()) ans.emplace_back(temp);
            return;
        }
        helper(nums, n - 1, ans, temp);
        temp.emplace_back(nums[n]);
        helper(nums, n - 1, ans, temp);
        temp.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        if (nums.size() == 1 && nums[0] == 0) return {{}, {nums[0]}};
        vector<vector<int>> ans;
        vector<int> temp;
        helper(nums, nums.size() - 1, ans, temp);
        return ans;
    }
};
