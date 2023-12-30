class Solution {
public:
    string truncateSentence(string s, int k) {
        for (int i=0; i<s.size();i++) {
            if (s[i]==' ') k--;
            if (k==0) s.erase(s.begin()+i, s.end());
        }
        return s;
    }
};