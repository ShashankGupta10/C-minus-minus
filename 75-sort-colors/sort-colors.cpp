class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) count_0++;
            if (nums[i] == 1) count_1++;
            if (nums[i] == 2) count_2++;
        }
        int i = 0;
        while (count_0 != 0) {
            nums[i] = 0;
            count_0--;
            i++;
        }
        while (count_1 != 0) {
            nums[i] = 1;
            count_1--;
            i++;
        }
        while (count_2 != 0) {
            nums[i] = 2;
            count_2--;
            i++;
        }
    }
};