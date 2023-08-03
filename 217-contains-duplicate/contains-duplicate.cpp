class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seenNumbers;

        for (int num : nums) {
            if (seenNumbers.find(num) != seenNumbers.end()) {
                return true; // Duplicate found
            }
            seenNumbers.insert(num);
        }

        return false; // No duplicates found
    }
};
