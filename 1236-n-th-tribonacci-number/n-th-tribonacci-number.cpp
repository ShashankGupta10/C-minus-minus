class Solution {
public:
    int tribonacci(int n) {
        int prev = 1, prev1 = 1, prev2 = 0;
        if (n == 0 || n == 1) return n;
        if (n == 2) return 1;
        for (int i = 3; i <=n; i++) {
            int num = prev;
            prev = prev + prev1 + prev2;
            prev2 = prev1;
            prev1 = num;
        }
        return prev;
    }
};