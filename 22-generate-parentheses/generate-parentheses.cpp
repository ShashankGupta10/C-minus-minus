class Solution {
public:
    void helper(int n, set<string> &ans, string res) {
        if (n == 0) {
            ans.insert(res);
            return;
        }
        for (int i = 0; i < res.size(); i++) {
            string temp = res;
            temp.insert(i, "()");
            helper(n - 1, ans, temp);
        }
    }
    vector<string> generateParenthesis(int n) {
        if (n == 1) return {"()"};
        set<string> ans;
        string res = "()";
        helper(n - 1, ans, res);
        vector<string> result;
        for (string it: ans) result.emplace_back(it);
        return result;
    }
};