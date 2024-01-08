class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ind = {};
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < target) low = mid + 1;
            else high = mid - 1; 
        }
        while (low < nums.size() && nums[low] == target) {
            ind.push_back(low);
            low++;
        }
        return ind;
    }
};