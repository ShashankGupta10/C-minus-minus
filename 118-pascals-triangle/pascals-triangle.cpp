class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.emplace_back(vector<int>{1});
        for (int i = 1; i < numRows; ++i) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j<i; ++j) {
                row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
            ans.emplace_back(row);
        }
        return ans;
    }
};
