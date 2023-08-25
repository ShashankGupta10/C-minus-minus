class Solution {
public:
    int binarySearch(vector<int>& arr, int start, int end, int target) {
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (target == arr[mid]) {
                return mid;
            }
            if (target > arr[mid]) {
                start = mid + 1;
            }
            if (target < arr[mid]) {
                end = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size() - 1, target);
    }
};
