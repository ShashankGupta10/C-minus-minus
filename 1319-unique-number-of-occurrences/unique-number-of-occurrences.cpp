class Solution {
public:
    int count(const vector<int>& nums, int num) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == num) {
                count++;
            }
        }
        return count;
    }

    bool uniqueOccurrences(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = count(nums, nums[i]);
        }
        unordered_set<int> occurrenceSet;
        for (const auto& kvp : mp) {
            if (!occurrenceSet.insert(kvp.second).second) {
                return false;
            }
        }
        return true;
    }
};
