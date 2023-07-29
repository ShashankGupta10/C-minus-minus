class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0, k=1;
        while(j<nums.size()){
            if(nums[j]==0){
                k--;
            }
            if(k<0){
                if(nums[i]==0){
                    k++;
                }
                i++;
            }
            j++;
        }
        return j-i-1;
    }
};