class Solution {
public:
    int balancedStringSplit(string s) {
        int result = 0;
        int l = 0, r = 0;
        for (char ch: s) {
            if (ch == 'L') l++;
            else r++;
            if (l==r) result++;
        }
        return result;
    }
};