class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char, int>> v;
        for (char ch: s) {
            int i;
            for (i = 0; i < v.size(); ++i) {
                if (v[i].first == ch) {
                    v[i].second++;
                    break;
                }
            }
            if (i == v.size()) v.emplace_back(make_pair(ch, 1));
        }
        sort(v.begin(), v.end(), [](pair<char, int> &a, pair<char, int> &b) {
            return a.second > b.second;
        });
        string res = "";
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[i].second; j++) res += v[i].first; 
        }
        return res;
    }
};