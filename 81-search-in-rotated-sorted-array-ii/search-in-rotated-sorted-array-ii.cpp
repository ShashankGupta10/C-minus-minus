class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int end, int target) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return true;
            }
            if (nums[mid] > target) {
                end = mid - 1;
            }
            if (nums[mid] < target) {
                start = mid + 1;
            }
        }
        return false;
    }
    
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int pivotIndex = 0;
        int n = nums.size();
        
        // Find the index of the maximum element (pivot) using a modified binary search
        int left = 0, right = n - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        pivotIndex = left;
        
        // Perform binary search on the left and right segments of the array
        int leftResult = binarySearch(nums, 0, pivotIndex - 1, target);
        int rightResult = binarySearch(nums, pivotIndex, n - 1, target);
        
        // Return the maximum of the two search results
        return leftResult || rightResult;
    }
};
