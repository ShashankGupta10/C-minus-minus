class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> st;
        unordered_map<int, int> mp;
        for (int i=0;i<nums1.size();i++) {
            if (mp.find(nums1[i]) == mp.end()) mp[nums1[i]]++;
        }
        for (int i=0;i<nums2.size();++i) {
            if (mp.find(nums2[i]) != mp.end() && mp[nums2[i]] > 0) {
                st.emplace_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        return st;
    }
};