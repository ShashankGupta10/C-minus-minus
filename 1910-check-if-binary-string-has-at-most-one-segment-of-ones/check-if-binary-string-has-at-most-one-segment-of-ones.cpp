class Solution {
public:
    bool checkOnesSegment(string s) {
        return string::npos == s.find("01");
    }
};
