class Solution {
public:
    int maxDepth(string s) {
        int res = 0;
        int ret = 0;
        for (int i=0;i<s.size();i++) {
            if(s[i]=='(') res++;
            if (s[i]==')') res--;
            ret = max(ret, res);
        }
        return ret;
    }
};