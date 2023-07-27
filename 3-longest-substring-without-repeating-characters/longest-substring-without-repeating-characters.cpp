class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        string non_repeated_str = "";
        
        for (auto it : s) {
            if (non_repeated_str.find(it) == string::npos) {
                non_repeated_str += it;
            } else {
                int str_len = non_repeated_str.size();
                if (str_len > max_len) {
                    max_len = str_len;
                }
                non_repeated_str = non_repeated_str.substr(non_repeated_str.find(it) + 1) + it;
            }
        }

        // Check if the last non-repeated substring is longer than max_len.
        int str_len = non_repeated_str.size();
        if (str_len > max_len) {
            max_len = str_len;
        }

        return max_len;
    }
};
