class Solution {
public:
    int count(int n) {
        int num = 0;
        while (n) {
            if (n&1) num++;
            n>>=1;
        }
        return num;
    }
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for (int i=0;i<=n;++i) {
            ans[i] = count(i);  
        }
        return ans;
    }
};