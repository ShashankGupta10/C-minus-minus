class Solution {
public:
    int romanToInt(string s) {
        int final_num = 0;
        unordered_map<char, int> mp;
        mp['M'] = 1000;
        mp['D'] = 500;
        mp['C'] = 100;
        mp['L'] = 50;
        mp['X'] = 10;
        mp['V'] = 5;
        mp['I'] = 1;
        for (int i=0;i<s.size();i++) {
            if (mp[s[i]]<mp[s[i+1]]) {
                final_num -=mp[s[i]];
            }
            else {
                final_num +=mp[s[i]];
            }
        }
        return final_num;
    }
};