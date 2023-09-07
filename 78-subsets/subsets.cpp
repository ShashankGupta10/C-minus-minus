class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        result.push_back({});
        
        for (int i = 0; i < n; i++) {
            int currentSize = result.size();
            for (int j = 0; j < currentSize; j++) {
                vector<int> subset = result[j];
                subset.push_back(nums[i]);
                result.push_back(subset);
            }
        }
        
        return result;
    }
};
