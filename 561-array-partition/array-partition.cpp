class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int max_sum = 0, n = nums.size() - 1;
        for (int i = 0; i < n; i+=2) {
            max_sum += min(nums[i], nums[i + 1]);
        }
        return max_sum;
    }
};