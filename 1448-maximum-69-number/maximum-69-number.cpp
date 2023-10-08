class Solution {
public:
    int maximum69Number (int num) {
        string num_str = to_string(num);
        for (int i = 0; i < num_str.size(); i++) {
            if (num_str[i] == '6') {
                num_str[i] = '9';
                break;
            }
        }
        return stoi(num_str);
    }
};
