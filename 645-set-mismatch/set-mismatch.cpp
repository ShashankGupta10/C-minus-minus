class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
				int n = nums.size();
				sort(nums.begin(), nums.end());
				vector<int> res(2);
				int XOR_A = nums[0];
				int XOR_N = n;
				for (int i = 1; i < n; i++) {
						if ((nums[i - 1] ^ nums[i]) == 0) res[0] = nums[i];
						else XOR_A ^= nums[i];
						XOR_N ^= i;
				}
				res[1] = XOR_N ^ XOR_A;
				return res;
		}
};