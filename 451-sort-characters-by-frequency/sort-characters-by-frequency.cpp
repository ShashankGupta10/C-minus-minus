class Solution {   
public:
    static bool compare(const std::pair<char, int>& a, const std::pair<char, int>& b) {
        return a.second > b.second;
    } 
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (char i : s) {
            mp[i]++;
        }
        vector<pair<char, int>> freqVec(mp.begin(), mp.end());
        sort(freqVec.begin(), freqVec.end(), compare);
        string res = "";
        for (const auto& it : freqVec) {
            for (int i = 0; i < it.second; i++) {
                res += it.first;
            }
        }
        return res;
    }
};