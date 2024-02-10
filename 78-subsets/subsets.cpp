class Solution {
public:
    void helper(vector<int> nums, vector<vector<int>> &result, int n, vector<int> &temp) {
        if (n < 0) {
            result.push_back(temp);
            return;
        }
        helper(nums, result, n - 1, temp);
        temp.push_back(nums[n]);
        helper(nums, result, n - 1, temp);
        temp.pop_back();
    }   
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        helper(nums, result, nums.size() - 1, temp);
        return result;
    }
};