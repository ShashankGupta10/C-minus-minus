class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int front;
        int sum = nums[0] + nums[1] + nums[2], sum1=0;
        for(int i = 0; i < nums.size(); ++i){
            front = i + 1;
            int back = nums.size() - 1;
            while (front < back) {
                sum1 = nums[front] + nums[back] + nums[i];
                if (abs(sum1 - target) <= abs(sum - target)) sum = sum1;
                if (sum1 > target) back--;
                else if (sum1 < target) front++;
                else return sum1;
            }
        }
        return sum;
    }
};