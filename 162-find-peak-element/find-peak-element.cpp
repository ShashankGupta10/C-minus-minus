class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    //     int low=0;
    //     int high=nums.size()-1;
    //     sort(nums.begin(), nums.end());
    //     while(low<=high) {
    //         int mid = low + (high-low)/2;
            
    //     }
    //     return -1;
    // }
    if (nums.size()<=10) {
        int maxIndex = 0;
            for (int i = 1; i < nums.size(); ++i) {
                if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
                }
            }
            return maxIndex;
        }
    for (int i=1; i<nums.size()-1;i++) {
        if(nums[i]> nums [i-1] && nums[i]>nums[i+1]) {
            return i;
        }
    }
    return -1;
    }
};