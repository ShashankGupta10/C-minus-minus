class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int result = 0, key;
        if (ruleKey == "type") key = 0;
        else if (ruleKey == "color") key = 1;
        else key = 2;

        for (vector<string> v: items) {
            if (v[key] == ruleValue) result++;
        }
        return result;
    }
};