class Solution {
public:
    int minPartitions(string n) {
        int max_num = 0;
        for (char digit : n) {
            if (digit == 9) return 9;
            int current_digit = digit - '0';
            max_num = current_digit>max_num?current_digit:max_num;
        }
        return max_num;
    }
};
