class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        for (int num : nums) {
            total_sum += num;
        }

        int sum_left = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum_right = total_sum - sum_left - nums[i];
            if (sum_left == sum_right) {
                return i;
            }
            sum_left += nums[i];
        }

        return -1;
    }
};
