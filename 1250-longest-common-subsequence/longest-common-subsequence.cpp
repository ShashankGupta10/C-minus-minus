class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        if (text1.length() < text2.length()) return LCS(text1, text2);
        return LCS(text2, text1);
    }

    int LCS(string s1, string s2) {
        int len1 = s1.size();
        int len2 = s2.size();
        vector<int> dp(len1 + 1, 0);
        for (int i = 1; i <= len2; i++) {
            int prev = 0;
            for (int j = 1; j <= len1; j++) {
                int temp = dp[j];
                if (s1[j - 1] == s2[i - 1]) dp[j] = prev + 1;
                else dp[j] = max(dp[j - 1], dp[j]);
                prev = temp;
            }
        }
        return dp[len1];
    }
};




