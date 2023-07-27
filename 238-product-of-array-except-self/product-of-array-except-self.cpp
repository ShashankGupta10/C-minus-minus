#include <vector>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left_product(n, 1);
        vector<int> right_product(n, 1);
        vector<int> result(n, 1);

        // Calculate the product of all elements to the left of each element
        int left_accumulator = 1;
        for (int i = 1; i < n; i++) {
            left_accumulator *= nums[i - 1];
            left_product[i] = left_accumulator;
        }

        // Calculate the product of all elements to the right of each element
        int right_accumulator = 1;
        for (int i = n - 2; i >= 0; i--) {
            right_accumulator *= nums[i + 1];
            right_product[i] = right_accumulator;
        }

        // Calculate the result array by combining the left and right products
        for (int i = 0; i < n; i++) {
            result[i] = left_product[i] * right_product[i];
        }

        return result;
    }
};
