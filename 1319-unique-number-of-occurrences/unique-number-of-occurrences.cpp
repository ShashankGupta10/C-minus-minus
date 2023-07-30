class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        unordered_map<int, int> occurrenceCount;
        unordered_set<int> seenCounts;

        for (const int num : nums) {
            occurrenceCount[num]++;
        }
        for (const auto& kvp : occurrenceCount) {
            if (!seenCounts.insert(kvp.second).second) {
                return false;
            }
        }
        return true;
    }
};
