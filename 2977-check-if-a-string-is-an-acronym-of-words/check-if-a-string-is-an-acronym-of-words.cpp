class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string acro = "";
        for (string ch: words) acro += ch[0];
        return acro==s;
    }
};