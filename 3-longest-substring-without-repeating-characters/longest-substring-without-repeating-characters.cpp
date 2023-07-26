#include <iostream>
#include <string>
#include <unordered_set>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int max_len = 0;
        std::unordered_set<char> char_set;
        int left = 0;
        int right = 0;

        while (right < s.length()) {
            // Try to extend the window to the right
            if (char_set.find(s[right]) == char_set.end()) {
                char_set.insert(s[right]);
                max_len = std::max(max_len, right - left + 1);
                right++;
            } else {
                // Shrink the window from the left
                char_set.erase(s[left]);
                left++;
            }
        }

        return max_len;
    }
};
