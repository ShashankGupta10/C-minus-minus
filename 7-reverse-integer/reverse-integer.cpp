class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        bool negative = x < 0;
        long long num = abs(static_cast<long long>(x));
        while (num > 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }
        if (negative) rev = -rev;
        if (rev > INT_MAX || rev < INT_MIN) return 0;
        return static_cast<int>(rev);
    }
};
