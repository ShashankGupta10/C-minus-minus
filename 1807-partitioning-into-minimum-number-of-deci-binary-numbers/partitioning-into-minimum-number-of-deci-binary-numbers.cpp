class Solution {
public:
    int minPartitions(string n) {
        int max_num = 0;
        for (auto i : n) {
            int digit = stoi(string(1, i));
            if (digit > max_num) max_num = digit;
        }
        return max_num;
    }
};
