class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int res = 0;
        
        for (int i: nums) s.insert(i);
        for (int i: nums) {
            if (s.find(i - 1)==s.end()) {
                int length = 0;
                while(s.find(i + length)!=s.end()) length++;
                res = max(res, length);
            }
        }
        return res;
    }
};