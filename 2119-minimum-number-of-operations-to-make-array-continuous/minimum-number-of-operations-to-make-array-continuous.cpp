class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> uniqueEle(nums.begin(), unique(nums.begin(), nums.end()));
        int ans = INT_MAX;
        for(int i = 0; i < uniqueEle.size(); i++) {
            int curr = uniqueEle[i];
            int end = curr + n - 1;
            auto it = upper_bound(uniqueEle.begin(), uniqueEle.end(), end);
            int indEnd = distance(uniqueEle.begin(), it);
            ans = min(ans, n - (indEnd - i));
        }
        return ans;
    }
};