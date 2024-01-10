class Solution {
public:
    int minimumSum(int num) {
        int digit_1 = to_string(num)[0] - '0';
        int digit_2 = to_string(num)[1] - '0';
        int digit_3 = to_string(num)[2] - '0';
        int digit_4 = to_string(num)[3] - '0';
        vector<int> num_sum = {digit_1, digit_2, digit_3, digit_4};
        sort(num_sum.begin(), num_sum.end());
        int min_sum = (num_sum[0] * 10 + num_sum[3]) + (num_sum[1] * 10 + num_sum[2]);
        return min_sum;
    }
};