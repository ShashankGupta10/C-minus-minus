#include <bits/stdc++.h>

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if (k == 0)
            return;
        std::rotate(nums.rbegin(), nums.rbegin() + k, nums.rend());
    }
};