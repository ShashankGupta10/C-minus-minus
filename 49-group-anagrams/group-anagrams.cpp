class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;

        for (string str: strs) {
            string res = str;
            sort(str.begin(), str.end());
            mp[str].push_back(res);
        }
        
        for (auto it: mp) ans.push_back(it.second);
        return ans;
    }
};