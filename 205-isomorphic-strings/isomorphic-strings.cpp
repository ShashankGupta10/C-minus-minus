class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sToT;

        if (s.size() != t.size()) {
            return false;
        }

        unordered_set<char> tMapped; 

        for (int i = 0; i < s.size(); i++) {
            if (sToT.find(s[i]) != sToT.end()) {
                if (sToT[s[i]] == t[i] && tMapped.find(t[i]) != tMapped.end()) {
                    continue;
                } else {
                    return false;
                }
            } else {
                if (tMapped.find(t[i]) != tMapped.end()) {
                    return false;
                }
                sToT[s[i]] = t[i];
                tMapped.insert(t[i]);
            }
        }
        return true;
    }
};
