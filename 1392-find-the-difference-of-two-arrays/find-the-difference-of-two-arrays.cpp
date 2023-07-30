class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        unordered_map<int, int> mp2;
        vector<vector<int>> v(2);

        for (int i = 0; i < nums1.size(); i++) {
            mp[nums1[i]] = i;
        }

        for (int i = 0; i < nums2.size(); i++) {
            mp2[nums2[i]] = i;
        }

        for (const auto& num : mp2) {
            auto it = mp.find(num.first); // Accessing the key using num.first
            if (it != mp.end()) {
                mp.erase(it);
            } else {
                v[1].push_back(num.first); // Accessing the key using num.first
            }
        }

        for (const auto& kvp : mp) {
            v[0].push_back(kvp.first);
        }

        return v;
    }
};
