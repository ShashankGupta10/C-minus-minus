class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for (char i: s) {
            mp[i]++;
        }
        for (char i: t) {
            if (mp.find(i)!=mp.end()) mp[i]--;
            else return false;
        }
        for(int i=0;i<mp.size();++i) {
            if (mp[i]!=0) return false;
        }
        return true;
    }
};