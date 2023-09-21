class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        vector<int> count(3, 0); // to count the occurrences of 'a', 'b', and 'c'
        int left = 0; // left pointer of the window
        int result = 0;

        for (int right = 0; right < n; right++) {
            count[s[right] - 'a']++; // Update the count for the current character

            // Check if the current window contains 'a', 'b', and 'c'
            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                result += n - right; // Increment result by the number of valid substrings ending at the current 'right' position
                count[s[left] - 'a']--; // Move the left pointer of the window
                left++;
            }
        }

        return result;
    }
};
