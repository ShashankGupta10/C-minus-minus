class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> mp;
        for (int i = 0; i < edges.size(); i++) {
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        for (pair<int, int> m: mp) {
            if (m.second == edges.size()) return m.first;
        }
        return 0;
    }
};