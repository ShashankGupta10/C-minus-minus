class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxIndex = 0;
            for (int i = 1; i < nums.size(); ++i) {
                if (nums[i] > nums[maxIndex]) {
                    maxIndex = i;
                }
            }
            return maxIndex;
    
    }

};