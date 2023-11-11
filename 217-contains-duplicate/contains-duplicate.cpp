class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i: nums) {
            if (mp.find(i)==mp.end()) mp[i]++;
            else return true;
        }
        return false;
    }
};