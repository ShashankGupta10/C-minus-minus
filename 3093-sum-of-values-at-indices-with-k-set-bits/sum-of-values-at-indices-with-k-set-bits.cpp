class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            int x = i; 
            while (x) {
                x &= (x - 1);
                count++;
            }
            if (count == k) {
                ans += nums[i]; 
            }
        }
        return ans;
    }
};
