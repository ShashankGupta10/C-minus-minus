class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i=0;i<*max_element(nums.begin(), nums.end());i++) {
            if (i!=nums[i]) {
                return i;
            }
        }
        return *max_element(nums.begin(), nums.end())+1;
    }
};