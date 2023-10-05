class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int n: nums) mp[n]++;
        for (pair it: mp) {
            if (it.second> floor(nums.size()/3)) ans.push_back(it.first);
        }
        return ans;
    }
};