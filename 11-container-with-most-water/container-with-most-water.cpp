#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_vol = 0;
        int left = 0;
        int right = n - 1;

        while (left < right) {
            int comp = min(height[left], height[right]) * (right - left);
            max_vol = max(max_vol, comp);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_vol;
    }
};
