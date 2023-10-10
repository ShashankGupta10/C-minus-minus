class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int last_smaller = INT_MIN;
        int c = 0;
        int largest = 1;
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-1 == last_smaller) {
                last_smaller = nums[i];
                c++;
            }
            else if(nums[i] != last_smaller) {
                c = 1;
                last_smaller = nums[i];
            }
            largest = max(largest,c);
        }
        return largest;
    }
};