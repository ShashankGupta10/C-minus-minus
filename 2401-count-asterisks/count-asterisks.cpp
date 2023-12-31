class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        int bars = 0;
        for (int i=0;i<s.size();++i) {
            if (s[i]=='|') bars++;
            if (bars % 2 == 0 && s[i]=='*') count++;
        }
        return count;
    }
};