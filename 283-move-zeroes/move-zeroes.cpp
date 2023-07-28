#include <bits/stdc++.h>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroPtr = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[nonZeroPtr] = nums[i];
                nonZeroPtr++;
            }
        }
        while (nonZeroPtr < nums.size()) {
            nums[nonZeroPtr] = 0;
            nonZeroPtr++;
        }
    }
};
