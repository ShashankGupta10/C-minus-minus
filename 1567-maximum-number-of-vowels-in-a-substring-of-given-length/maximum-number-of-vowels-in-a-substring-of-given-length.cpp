class Solution {
public:
    int maxVowels(string s, int k) {
        int max_vow = 0;
        int current_vow = 0;

        for (int i = 0; i < k; i++) {
            if (isVowel(s[i]))
                current_vow++;
        }

        max_vow = current_vow;

        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i - k]))
                current_vow--;

            if (isVowel(s[i]))
                current_vow++;

            max_vow = max(max_vow, current_vow);
        }

        return max_vow;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
