class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        
        // Handle the case of an array with a single element
        if (n == 1) {
            return 0;
        }
        
        // Check the first and last elements separately
        if (nums[0] > nums[1]) {
            return 0;
        }
        if (nums[n - 1] > nums[n - 2]) {
            return n - 1;
        }
        
        int low = 1;
        int high = n - 2;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) {
                return mid;
            }
            if (nums[mid] > nums[mid + 1]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return -1; // No peak element found
    }
};
