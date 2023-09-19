#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp;
        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';

        if (s.size() % 2 != 0) {
            // If the string length is odd, it can't be valid
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty() || st.top() != mp[s[i]]) {
                    return false; // Mismatch or stack is empty
                }
                st.pop();
            }
        }

        return st.empty(); // If the stack is empty, the string is valid
    }
};
