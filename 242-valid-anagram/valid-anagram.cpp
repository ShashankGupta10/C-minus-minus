class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> letterCount;

        for (char letter : s) {
            letterCount[letter]++;
        }

        for (char letter : t) {
            if (letterCount.find(letter) == letterCount.end() || letterCount[letter] == 0) {
                return false;
            }
            letterCount[letter]--;
        }

        return true;
    }
};
