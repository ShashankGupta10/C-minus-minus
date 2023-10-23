class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string one = "";
        string two = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#') {
                if (!one.empty()) one = one.substr(0, one.size() - 1);
            } 
            else one += s[i];
        }
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == '#') {
                if (!two.empty()) two = two.substr(0, two.size() - 1);
            }
            else two += t[i];
        }
        return one == two;
    }
};
