#include <vector>
#include <algorithm>

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        int operations = 0;

        while (i < j) {
            int sum = nums[i] + nums[j];

            if (sum == k) {
                operations++;
                i++;
                j--;
            } else if (sum > k) {
                j--;
            } else {
                i++;
            }
        }

        return operations;
    }
};
