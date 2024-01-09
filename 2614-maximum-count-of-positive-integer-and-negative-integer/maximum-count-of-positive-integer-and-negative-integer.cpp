class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= 0) high = mid - 1;
            else low = mid + 1;
        }
        int count = 0;
        int trav = low;
        while (trav < nums.size() && nums[trav] == 0) {
            count++;
            trav++;
        }

        int ans = low > nums.size() - count - low? low: nums.size() - count - low;
        return ans; 
    }
};