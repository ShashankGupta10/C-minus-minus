class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> result; 
        for(char ch = s[0]; ch <= s[3]; ch++){
            for(int i = s[1]-'0'; i <= s[4]-'0'; i++){
                result.push_back(ch + to_string(i));
            }
        }
        return result;
    }
};