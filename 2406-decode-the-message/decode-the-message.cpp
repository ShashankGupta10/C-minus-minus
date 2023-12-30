class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;
        char first = 'a';
        for (char ch: key) {
            if (ch!=' ' && mp.find(ch) == mp.end()) {
                mp[ch] = first;
                cout << first << ch << "\n";
                first++;
            }
        }
        for (int i=0;i<message.size();i++) {
            if (message[i]!=' ') message[i] = mp[message[i]];
        }
        return message;
    }
};