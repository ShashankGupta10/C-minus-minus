class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i = 0, n = s.size() - 1;
        while (i < n) {
            if (s[i] != s[n]) {
                s[i] = s[n] = (s[i] < s[n]) ? s[i] : s[n];
            }
            i++;
            n--;
        }
        return s;
    }
};