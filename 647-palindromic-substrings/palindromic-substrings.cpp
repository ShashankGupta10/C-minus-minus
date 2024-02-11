class Solution {
public:
    void helper(string s, int n, vector<string> &arr) {
        for (int i = 0; i <= n; i++) {
            string temp = "";
            for (int j = i; j <= n; j++) {
                temp += s[j];
                arr.emplace_back(temp);
            }
        }
    }
    int countSubstrings(string s) {
        vector<string> arr;
        int count = 0;
        helper(s, s.size() - 1, arr);
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i].size() == 0) continue;
            string temp = arr[i];
            reverse(temp.begin(), temp.end());
            if (temp == arr[i]) count++;
        }
        return count;
    }
};