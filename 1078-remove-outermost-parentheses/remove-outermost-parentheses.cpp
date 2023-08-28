class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string ansStr = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' && count == 0) {
                count++;
            }
            else if (s[i] == '(' && count > 0) {
                ansStr += s[i];
                count++;
            }
            else if (s[i] == ')' && count > 1) {
                ansStr += s[i];
                count--;
            }
            else if (s[i] == ')' && count == 1) {
                count--;
            }
        }
        return ansStr;
    }
};
