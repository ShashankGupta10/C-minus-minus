class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> v(nums.size());
        for (int i =0; i <nums.size(); i++) {
            v[i] = nums[nums[i]];
        }
        return v;
    }
};