#include <vector>
#include <unordered_map>

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        std::unordered_map<int, int> freqMap;
        int operations = 0;

        for (int num : nums) {
            int complement = k - num;
            if (freqMap[complement] > 0) {
                operations++;
                freqMap[complement]--;
            } else {
                freqMap[num]++;
            }
        }

        return operations;
    }
};
