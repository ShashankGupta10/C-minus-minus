#include <algorithm>
#include <sstream>

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, rev_string;
        vector<string> v;

        while (ss >> word) {
            v.push_back(word);
        }

        reverse(v.begin(), v.end());

        // Concatenate the reversed words to form the final result
        for (const auto& it : v) {
            rev_string += it + " ";
        }

        // Remove the extra space at the end
        if (!rev_string.empty()) {
            rev_string.pop_back();
        }

        return rev_string;
    }
};