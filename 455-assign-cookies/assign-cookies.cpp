class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0;
        int gIndex = 0; 
        int sIndex = 0;
        while (gIndex < g.size() && sIndex < s.size()) {
            if (s[sIndex] >= g[gIndex]) {
                count++;
                gIndex++;
            }
            sIndex++; 
        }
        return count;
    }
};
