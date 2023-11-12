class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int i = 0;
        int length = 0;

       for (int j=0;j<s.size();j++) {
            if (mp.count(s[j]) == 0 || mp[s[j]] < i) {
                mp[s[j]] = j;
                length = max(length, j - i + 1);
            } else {
                i = mp[s[j]] + 1;
                mp[s[j]] = j;
            }
        }
        return length;
    }
};