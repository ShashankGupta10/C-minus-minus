class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int leftIndex = nums.size()-2;
        int maxRight = nums.back();
        while(leftIndex >= 0 && nums[leftIndex] >= maxRight){
            maxRight = max(maxRight, nums[leftIndex]);
            leftIndex--;
        }
        if(leftIndex == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        int indexHigherThanLeft = 0;
        for(int i = nums.size()-1; i!= 0; i--){
            if(nums[i] > nums[leftIndex]){
                indexHigherThanLeft = i;
                break;
            }
        }
        swap(nums[leftIndex], nums[indexHigherThanLeft]);
        reverse(nums.begin() + leftIndex + 1, nums.end());
    }
};