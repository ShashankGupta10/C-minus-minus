class Solution {
public:
    int partitionString(string s) {
        int parts = 0;
        string sub = "";
        for (int i = 0; i < s.size(); i++) {
            if (sub.find(s[i]) == string::npos) sub += s[i];
            else {
                cout << sub << "\n";
                parts++;
                sub = "";
                sub += s[i];
            }
        }
        return parts + 1;
    }
};