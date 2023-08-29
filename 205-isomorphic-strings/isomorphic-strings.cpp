class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sToT;  // Map to store mapping from s to t
        unordered_map<char, bool> tMapped;  // Map to keep track of characters in t that are already mapped

        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            if (sToT.find(s[i]) != sToT.end()) {
                if (sToT[s[i]] == t[i]) {
                    continue;
                } else {
                    return false;
                }
            } else {
                if (tMapped[t[i]]) {
                    return false;  // t[i] is already mapped to another character in s
                }
                sToT[s[i]] = t[i];
                tMapped[t[i]] = true;
            }
        }
        return true;
    }
};
